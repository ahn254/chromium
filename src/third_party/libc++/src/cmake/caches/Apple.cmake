set(CMAKE_BUILD_TYPE MinSizeRel CACHE STRING "")
set(CMAKE_POSITION_INDEPENDENT_CODE OFF CACHE BOOL "")

set(LIBCXX_USE_COMPILER_RT ON CACHE BOOL "")
set(LIBCXX_ABI_VERSION "1" CACHE STRING "")
set(LIBCXX_ENABLE_STATIC ON CACHE BOOL "")
set(LIBCXX_ENABLE_SHARED ON CACHE BOOL "")
set(LIBCXX_CXX_ABI libcxxabi CACHE STRING "")
set(LIBCXX_ENABLE_VENDOR_AVAILABILITY_ANNOTATIONS ON CACHE BOOL "")
set(LIBCXX_PSTL_CPU_BACKEND libdispatch CACHE STRING "")

set(LIBCXX_HERMETIC_STATIC_LIBRARY ON CACHE BOOL "")
set(LIBCXXABI_HERMETIC_STATIC_LIBRARY ON CACHE BOOL "")

set(LIBCXXABI_ENABLE_ASSERTIONS OFF CACHE BOOL "")
set(LIBCXXABI_ENABLE_FORGIVING_DYNAMIC_CAST ON CACHE BOOL "")

set(LIBCXX_TEST_CONFIG "apple-libc++-shared.cfg.in" CACHE STRING "")
set(LIBCXXABI_TEST_CONFIG "apple-libc++abi-shared.cfg.in" CACHE STRING "")
