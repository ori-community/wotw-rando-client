#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UserAndroidDeviceInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UserAndroidDeviceInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserAndroidDeviceInfo_DEFINED)
#include <Modloader/app/structs/UserAndroidDeviceInfo__Fields.h>
#if defined(IL2CPP_STRUCT_UserAndroidDeviceInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_UserAndroidDeviceInfo_DEFINED
struct UserAndroidDeviceInfo__Class;
struct UserAndroidDeviceInfo {
    struct UserAndroidDeviceInfo__Class* klass;
    MonitorData* monitor;
    struct UserAndroidDeviceInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UserAndroidDeviceInfo_FWDDECL)
#define IL2CPP_STRUCT_UserAndroidDeviceInfo_FWDDECL
#include <Modloader/app/structs/UserAndroidDeviceInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_UserAndroidDeviceInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserAndroidDeviceInfo_DEFINED) && !defined(IL2CPP_STRUCT_UserAndroidDeviceInfo_FWDDECL)
#include <Modloader/app/structs/UserAndroidDeviceInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UserAndroidDeviceInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
