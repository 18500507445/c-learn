cmake_minimum_required(VERSION 3.20)
project(c-learn C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

#递归遍历所有的c文件
file (GLOB_RECURSE files *.c)
#将所有的cpp文件单独生成可执行文件
foreach (file ${files})
    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" exe ${file})
    add_executable (${exe} ${file})
    message (\ \ \ \ --\ src/${exe}.c\ will\ be\ compiled\ to\ bin/${exe})
endforeach ()
