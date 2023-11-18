#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PasswordDeriveBytes_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PasswordDeriveBytes_INITIALIZING
#if !defined(IL2CPP_STRUCT_PasswordDeriveBytes_DEFINED)
#include <Modloader/app/structs/PasswordDeriveBytes__Fields.h>
#if defined(IL2CPP_STRUCT_PasswordDeriveBytes__Fields_DEFINED)
#define IL2CPP_STRUCT_PasswordDeriveBytes_DEFINED
struct PasswordDeriveBytes__Class;
struct PasswordDeriveBytes {
    struct PasswordDeriveBytes__Class* klass;
    MonitorData* monitor;
    struct PasswordDeriveBytes__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PasswordDeriveBytes_FWDDECL)
#define IL2CPP_STRUCT_PasswordDeriveBytes_FWDDECL
#include <Modloader/app/structs/PasswordDeriveBytes__Class.h>
#endif
#undef IL2CPP_STRUCT_PasswordDeriveBytes_INITIALIZING
#if !defined(IL2CPP_STRUCT_PasswordDeriveBytes_DEFINED) && !defined(IL2CPP_STRUCT_PasswordDeriveBytes_FWDDECL)
#include <Modloader/app/structs/PasswordDeriveBytes.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PasswordDeriveBytes.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
