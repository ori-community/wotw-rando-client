#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UserAccountInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UserAccountInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserAccountInfo_DEFINED)
#include <Modloader/app/structs/UserAccountInfo__Fields.h>
#if defined(IL2CPP_STRUCT_UserAccountInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_UserAccountInfo_DEFINED
struct UserAccountInfo__Class;
struct UserAccountInfo {
    struct UserAccountInfo__Class* klass;
    MonitorData* monitor;
    struct UserAccountInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UserAccountInfo_FWDDECL)
#define IL2CPP_STRUCT_UserAccountInfo_FWDDECL
#include <Modloader/app/structs/UserAccountInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_UserAccountInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserAccountInfo_DEFINED) && !defined(IL2CPP_STRUCT_UserAccountInfo_FWDDECL)
#include <Modloader/app/structs/UserAccountInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UserAccountInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
