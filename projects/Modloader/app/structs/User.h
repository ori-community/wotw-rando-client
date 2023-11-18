#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_User_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_User_INITIALIZING
#if !defined(IL2CPP_STRUCT_User_DEFINED)
#include <Modloader/app/structs/User__Fields.h>
#if defined(IL2CPP_STRUCT_User__Fields_DEFINED)
#define IL2CPP_STRUCT_User_DEFINED
struct User__Class;
struct User {
    struct User__Class* klass;
    MonitorData* monitor;
    struct User__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_User_FWDDECL)
#define IL2CPP_STRUCT_User_FWDDECL
#include <Modloader/app/structs/User__Class.h>
#endif
#undef IL2CPP_STRUCT_User_INITIALIZING
#if !defined(IL2CPP_STRUCT_User_DEFINED) && !defined(IL2CPP_STRUCT_User_FWDDECL)
#include <Modloader/app/structs/User.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/User.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
