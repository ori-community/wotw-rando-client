#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WwiseEventSystem_SoundHandleProtected_CallbackData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WwiseEventSystem_SoundHandleProtected_CallbackData_INITIALIZING
#if !defined(IL2CPP_STRUCT_WwiseEventSystem_SoundHandleProtected_CallbackData_DEFINED)
#include <Modloader/app/structs/AkCallbackType__Enum.h>
#if defined(IL2CPP_STRUCT_AkCallbackType__Enum_DEFINED)
#define IL2CPP_STRUCT_WwiseEventSystem_SoundHandleProtected_CallbackData_DEFINED
struct WwiseEventSystem_SoundHandleProtected;
struct Object;
struct AkCallbackInfo;
struct WwiseEventSystem_SoundHandleProtected_CallbackData {
    struct WwiseEventSystem_SoundHandleProtected* SoundHandle;
    struct Object* Cookie;
    AkCallbackType__Enum Type;

    struct AkCallbackInfo* Info;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WwiseEventSystem_SoundHandleProtected_CallbackData_FWDDECL)
#define IL2CPP_STRUCT_WwiseEventSystem_SoundHandleProtected_CallbackData_FWDDECL
#include <Modloader/app/structs/AkCallbackInfo.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/WwiseEventSystem_SoundHandleProtected.h>
#endif
#undef IL2CPP_STRUCT_WwiseEventSystem_SoundHandleProtected_CallbackData_INITIALIZING
#if !defined(IL2CPP_STRUCT_WwiseEventSystem_SoundHandleProtected_CallbackData_DEFINED) && !defined(IL2CPP_STRUCT_WwiseEventSystem_SoundHandleProtected_CallbackData_FWDDECL)
#include <Modloader/app/structs/WwiseEventSystem_SoundHandleProtected_CallbackData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WwiseEventSystem_SoundHandleProtected_CallbackData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
