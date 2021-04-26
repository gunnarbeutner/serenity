set(CMAKE_CXX_OUTPUT_EXTENSION_REPLACE 1)

function(serenity_kernel_module name sources)
    add_library(${name} SHARED ${sources})
    target_link_libraries(${name} kernel_stdlib)
    install(TARGETS ${name} DESTINATION mod)
endfunction()

serenity_kernel_module(TestModule TestModule.cpp)
