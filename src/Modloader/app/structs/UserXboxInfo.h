#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UserXboxInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UserXboxInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserXboxInfo_DEFINED)
#include <Modloader/app/structs/UserXboxInfo__Fields.h>
#if defined(IL2CPP_STRUCT_UserXboxInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_UserXboxInfo_DEFINED
struct UserXboxInfo__Class;
struct UserXboxInfo {
    struct UserXboxInfo__Class* klass;
    MonitorData* monitor;
    struct UserXboxInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UserXboxInfo_FWDDECL)
#define IL2CPP_STRUCT_UserXboxInfo_FWDDECL
#include <Modloader/app/structs/UserXboxInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_UserXboxInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserXboxInfo_DEFINED) && !defined(IL2CPP_STRUCT_UserXboxInfo_FWDDECL)
#include <Modloader/app/structs/UserXboxInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UserXboxInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
