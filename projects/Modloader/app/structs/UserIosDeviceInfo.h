#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UserIosDeviceInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UserIosDeviceInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserIosDeviceInfo_DEFINED)
#include <Modloader/app/structs/UserIosDeviceInfo__Fields.h>
#if defined(IL2CPP_STRUCT_UserIosDeviceInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_UserIosDeviceInfo_DEFINED
struct UserIosDeviceInfo__Class;
struct UserIosDeviceInfo {
    struct UserIosDeviceInfo__Class* klass;
    MonitorData* monitor;
    struct UserIosDeviceInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UserIosDeviceInfo_FWDDECL)
#define IL2CPP_STRUCT_UserIosDeviceInfo_FWDDECL
#include <Modloader/app/structs/UserIosDeviceInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_UserIosDeviceInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserIosDeviceInfo_DEFINED) && !defined(IL2CPP_STRUCT_UserIosDeviceInfo_FWDDECL)
#include <Modloader/app/structs/UserIosDeviceInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UserIosDeviceInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
