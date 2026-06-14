#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AsyncReadRequest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AsyncReadRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncReadRequest__Fields_DEFINED)
#include <Modloader/app/structs/AsyncReadOrWriteRequest__Fields.h>
#if defined(IL2CPP_STRUCT_AsyncReadOrWriteRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_AsyncReadRequest__Fields_DEFINED
struct AsyncReadRequest__Fields {
    struct AsyncReadOrWriteRequest__Fields _;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AsyncReadRequest__Fields_FWDDECL)
#define IL2CPP_STRUCT_AsyncReadRequest__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_AsyncReadRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncReadRequest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AsyncReadRequest__Fields_FWDDECL)
#include <Modloader/app/structs/AsyncReadRequest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AsyncReadRequest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
