#pragma once

#if __has_include(<execution>)
#include <execution>
#endif
#if __cpp_lib_execution
    #define COMPRESSED_IMAGE_EXEC_PARALLEL std::execution::par,
    #define COMPRESSED_IMAGE_EXEC_PARALLEL_UNSEQ std::execution::par_unseq,
#else
    #define COMPRESSED_IMAGE_EXEC_PARALLEL
    #define COMPRESSED_IMAGE_EXEC_PARALLEL_UNSEQ
#endif

#define NAMESPACE_COMPRESSED_IMAGE compressed
