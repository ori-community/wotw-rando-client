#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabDeviceUtil_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabDeviceUtil_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabDeviceUtil_DEFINED)
#define IL2CPP_STRUCT_PlayFabDeviceUtil_DEFINED
struct PlayFabDeviceUtil__Class;
struct PlayFabDeviceUtil {
    struct PlayFabDeviceUtil__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_PlayFabDeviceUtil_FWDDECL)
#define IL2CPP_STRUCT_PlayFabDeviceUtil_FWDDECL
#include <Modloader/app/structs/PlayFabDeviceUtil__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayFabDeviceUtil_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabDeviceUtil_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabDeviceUtil_FWDDECL)
#include <Modloader/app/structs/PlayFabDeviceUtil.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabDeviceUtil.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
