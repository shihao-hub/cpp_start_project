inspect = inspect or require("external.inspect.inspect")

local settings = require("settings")

print(inspect(settings))

-- todo: 设置 package.path，首先是 main.lua 所在目录（lua 好像默认就能找到？YES）
print(package.path)