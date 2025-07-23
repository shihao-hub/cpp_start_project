
extern "C" {
#include "lua.h"
#include "lauxlib.h"
#include "lualib.h"
}

/**
 * 一个简单的 lua 独立解释器
 */
void simple_lua_interpreter() {
    char buff[255];
    int error;
    lua_State *L = luaL_newstate();
    luaL_openlibs(L);

    while (fgets(buff, sizeof buff, stdin) != nullptr) {
        error = luaL_loadstring(L, buff) || lua_pcall(L, 0, 0, 0);
        if (error) {
            fprintf(stderr, "%s\n", lua_tostring(L, -1));
            lua_pop(L, 1);
        }
    }

    lua_close(L);
}

int main() {
    simple_lua_interpreter();
}