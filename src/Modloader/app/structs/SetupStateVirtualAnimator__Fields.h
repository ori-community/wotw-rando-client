#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetupStateVirtualAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetupStateVirtualAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetupStateVirtualAnimator__Fields_DEFINED)
#include <Modloader/app/structs/AnimatorPlayState__Enum.h>
#if defined(IL2CPP_STRUCT_AnimatorPlayState__Enum_DEFINED)
#define IL2CPP_STRUCT_SetupStateVirtualAnimator__Fields_DEFINED
struct SetupState;
struct NewSetupStateController;
struct PlaybackStatus;
struct __declspec(align(8)) SetupStateVirtualAnimator__Fields {
    struct SetupState* _State_k__BackingField;
    struct NewSetupStateController* _StateController_k__BackingField;
    float m_desiredValue;
    AnimatorPlayState__Enum _PlayState_k__BackingField;

    struct PlaybackStatus* _PlaybackStatus_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetupStateVirtualAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_SetupStateVirtualAnimator__Fields_FWDDECL
#include <Modloader/app/structs/NewSetupStateController.h>
#include <Modloader/app/structs/PlaybackStatus.h>
#include <Modloader/app/structs/SetupState.h>
#endif
#undef IL2CPP_STRUCT_SetupStateVirtualAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetupStateVirtualAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SetupStateVirtualAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/SetupStateVirtualAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetupStateVirtualAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
