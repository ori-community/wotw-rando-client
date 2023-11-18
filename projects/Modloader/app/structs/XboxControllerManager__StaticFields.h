#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XboxControllerManager__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XboxControllerManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxControllerManager__StaticFields_DEFINED)
#include <Modloader/app/structs/JobHandle.h>
#if defined(IL2CPP_STRUCT_JobHandle_DEFINED)
#define IL2CPP_STRUCT_XboxControllerManager__StaticFields_DEFINED
struct XboxControllerManager;
struct XboxControllerManager_SetVibrationDelegate;
struct XboxControllerManager__StaticFields {
    struct XboxControllerManager* s_currentControllerManager;
    struct JobHandle m_vibrationJobHandle;
    struct XboxControllerManager_SetVibrationDelegate* SetVibrationCallback;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XboxControllerManager__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_XboxControllerManager__StaticFields_FWDDECL
#include <Modloader/app/structs/XboxControllerManager.h>
#include <Modloader/app/structs/XboxControllerManager_SetVibrationDelegate.h>
#endif
#undef IL2CPP_STRUCT_XboxControllerManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxControllerManager__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_XboxControllerManager__StaticFields_FWDDECL)
#include <Modloader/app/structs/XboxControllerManager__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XboxControllerManager__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
