#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Base64Stream_WriteAsyncResult__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Base64Stream_WriteAsyncResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Base64Stream_WriteAsyncResult__Fields_DEFINED)
#include <Modloader/app/structs/LazyAsyncResult__Fields.h>
#if defined(IL2CPP_STRUCT_LazyAsyncResult__Fields_DEFINED)
#define IL2CPP_STRUCT_Base64Stream_WriteAsyncResult__Fields_DEFINED
struct Base64Stream;
struct Byte__Array;
struct Base64Stream_WriteAsyncResult__Fields {
    struct LazyAsyncResult__Fields _;
    struct Base64Stream* parent;
    struct Byte__Array* buffer;
    int32_t offset;
    int32_t count;
    int32_t written;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Base64Stream_WriteAsyncResult__Fields_FWDDECL)
#define IL2CPP_STRUCT_Base64Stream_WriteAsyncResult__Fields_FWDDECL
#include <Modloader/app/structs/Base64Stream.h>
#include <Modloader/app/structs/Byte__Array.h>
#endif
#undef IL2CPP_STRUCT_Base64Stream_WriteAsyncResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Base64Stream_WriteAsyncResult__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Base64Stream_WriteAsyncResult__Fields_FWDDECL)
#include <Modloader/app/structs/Base64Stream_WriteAsyncResult__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Base64Stream_WriteAsyncResult__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
