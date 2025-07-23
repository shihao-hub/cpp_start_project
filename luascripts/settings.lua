local env = {}
setfenv(1, env)

ROOT_DIR = "E:\\ProgrammingProjects\\CLionProjects\\cpp_start_project" -- 项目根目录
SCRIPT_DIR = ROOT_DIR .. "/" .. "scripts" -- 脚本目录

return env