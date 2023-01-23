#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChunkedInputStream_ReadBufferState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChunkedInputStream_ReadBufferState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChunkedInputStream_ReadBufferState__Fields_DEFINED)
#define IL2CPP_STRUCT_ChunkedInputStream_ReadBufferState__Fields_DEFINED
struct Byte__Array;
struct HttpStreamAsyncResult;
struct __declspec(align(8)) ChunkedInputStream_ReadBufferState__Fields {
    struct Byte__Array* Buffer;
    int32_t Offset;
    int32_t Count;
    int32_t InitialCount;
    struct HttpStreamAsyncResult* Ares;
};
#endif
#if !defined(IL2CPP_STRUCT_ChunkedInputStream_ReadBufferState__Fields_FWDDECL)
#define IL2CPP_STRUCT_ChunkedInputStream_ReadBufferState__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/HttpStreamAsyncResult.h>
#endif
#undef IL2CPP_STRUCT_ChunkedInputStream_ReadBufferState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChunkedInputStream_ReadBufferState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ChunkedInputStream_ReadBufferState__Fields_FWDDECL)
#include <Modloader/app/structs/ChunkedInputStream_ReadBufferState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChunkedInputStream_ReadBufferState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
