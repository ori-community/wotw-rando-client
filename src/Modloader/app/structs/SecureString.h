#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SecureString_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SecureString_INITIALIZING
#if !defined(IL2CPP_STRUCT_SecureString_DEFINED)
#include <Modloader/app/structs/SecureString__Fields.h>
#if defined(IL2CPP_STRUCT_SecureString__Fields_DEFINED)
#define IL2CPP_STRUCT_SecureString_DEFINED
struct SecureString__Class;
struct SecureString {
    struct SecureString__Class* klass;
    MonitorData* monitor;
    struct SecureString__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SecureString_FWDDECL)
#define IL2CPP_STRUCT_SecureString_FWDDECL
#include <Modloader/app/structs/SecureString__Class.h>
#endif
#undef IL2CPP_STRUCT_SecureString_INITIALIZING
#if !defined(IL2CPP_STRUCT_SecureString_DEFINED) && !defined(IL2CPP_STRUCT_SecureString_FWDDECL)
#include <Modloader/app/structs/SecureString.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SecureString.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
