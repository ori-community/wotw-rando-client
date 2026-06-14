#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UserChangeEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UserChangeEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserChangeEventArgs_DEFINED)
#include <Modloader/app/structs/UserChangeEventArgs__Fields.h>
#if defined(IL2CPP_STRUCT_UserChangeEventArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_UserChangeEventArgs_DEFINED
struct UserChangeEventArgs__Class;
struct UserChangeEventArgs {
    struct UserChangeEventArgs__Class* klass;
    MonitorData* monitor;
    struct UserChangeEventArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UserChangeEventArgs_FWDDECL)
#define IL2CPP_STRUCT_UserChangeEventArgs_FWDDECL
#include <Modloader/app/structs/UserChangeEventArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_UserChangeEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserChangeEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_UserChangeEventArgs_FWDDECL)
#include <Modloader/app/structs/UserChangeEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UserChangeEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
