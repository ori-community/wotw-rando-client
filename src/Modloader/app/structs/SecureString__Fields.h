#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SecureString__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SecureString__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SecureString__Fields_DEFINED)
#define IL2CPP_STRUCT_SecureString__Fields_DEFINED
struct Byte__Array;
struct __declspec(align(8)) SecureString__Fields {
    int32_t length;
    bool disposed;
    bool read_only;
    struct Byte__Array* data;
};
#endif
#if !defined(IL2CPP_STRUCT_SecureString__Fields_FWDDECL)
#define IL2CPP_STRUCT_SecureString__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#endif
#undef IL2CPP_STRUCT_SecureString__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SecureString__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SecureString__Fields_FWDDECL)
#include <Modloader/app/structs/SecureString__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SecureString__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
