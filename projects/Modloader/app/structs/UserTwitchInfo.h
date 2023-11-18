#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UserTwitchInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UserTwitchInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserTwitchInfo_DEFINED)
#include <Modloader/app/structs/UserTwitchInfo__Fields.h>
#if defined(IL2CPP_STRUCT_UserTwitchInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_UserTwitchInfo_DEFINED
struct UserTwitchInfo__Class;
struct UserTwitchInfo {
    struct UserTwitchInfo__Class* klass;
    MonitorData* monitor;
    struct UserTwitchInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UserTwitchInfo_FWDDECL)
#define IL2CPP_STRUCT_UserTwitchInfo_FWDDECL
#include <Modloader/app/structs/UserTwitchInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_UserTwitchInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserTwitchInfo_DEFINED) && !defined(IL2CPP_STRUCT_UserTwitchInfo_FWDDECL)
#include <Modloader/app/structs/UserTwitchInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UserTwitchInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
