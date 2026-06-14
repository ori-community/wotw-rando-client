#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberStateModifierDataVirtualAnimator_1_System_Object___Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberStateModifierDataVirtualAnimator_1_System_Object___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateModifierDataVirtualAnimator_1_System_Object___Fields_DEFINED)
#include <Modloader/app/structs/AnimatorPlayState__Enum.h>
#if defined(IL2CPP_STRUCT_AnimatorPlayState__Enum_DEFINED)
#define IL2CPP_STRUCT_UberStateModifierDataVirtualAnimator_1_System_Object___Fields_DEFINED
struct PlaybackStatus;
struct SetupStateModifier;
struct NewSetupStateController;
struct __declspec(align(8)) UberStateModifierDataVirtualAnimator_1_System_Object___Fields {
    AnimatorPlayState__Enum _PlayState_k__BackingField;

    struct PlaybackStatus* _PlaybackStatus_k__BackingField;
    struct SetupStateModifier* m_stateModifier;
    struct NewSetupStateController* m_stateController;
    int32_t m_stateGuid;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberStateModifierDataVirtualAnimator_1_System_Object___Fields_FWDDECL)
#define IL2CPP_STRUCT_UberStateModifierDataVirtualAnimator_1_System_Object___Fields_FWDDECL
#include <Modloader/app/structs/NewSetupStateController.h>
#include <Modloader/app/structs/PlaybackStatus.h>
#include <Modloader/app/structs/SetupStateModifier.h>
#endif
#undef IL2CPP_STRUCT_UberStateModifierDataVirtualAnimator_1_System_Object___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateModifierDataVirtualAnimator_1_System_Object___Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberStateModifierDataVirtualAnimator_1_System_Object___Fields_FWDDECL)
#include <Modloader/app/structs/UberStateModifierDataVirtualAnimator_1_System_Object___Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberStateModifierDataVirtualAnimator_1_System_Object___Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
