#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UserGameCenterInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UserGameCenterInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserGameCenterInfo_DEFINED)
#include <Modloader/app/structs/UserGameCenterInfo__Fields.h>
#if defined(IL2CPP_STRUCT_UserGameCenterInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_UserGameCenterInfo_DEFINED
struct UserGameCenterInfo__Class;
struct UserGameCenterInfo {
    struct UserGameCenterInfo__Class* klass;
    MonitorData* monitor;
    struct UserGameCenterInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UserGameCenterInfo_FWDDECL)
#define IL2CPP_STRUCT_UserGameCenterInfo_FWDDECL
#include <Modloader/app/structs/UserGameCenterInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_UserGameCenterInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserGameCenterInfo_DEFINED) && !defined(IL2CPP_STRUCT_UserGameCenterInfo_FWDDECL)
#include <Modloader/app/structs/UserGameCenterInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UserGameCenterInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
