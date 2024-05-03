add_library(metrics INTERFACE
        metrics.hpp)

find_package(LLVM CONFIG COMPONENTS LLVMSupport REQUIRED)

target_include_directories(metrics
    INTERFACE
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
        $<INSTALL_INTERFACE:include>
        ${LLVM_INCLUDE_DIRS}
    )

target_link_libraries(metrics
INTERFACE
    LLVMSupport
)
