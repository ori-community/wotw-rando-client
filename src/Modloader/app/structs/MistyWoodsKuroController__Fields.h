#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MistyWoodsKuroController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MistyWoodsKuroController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MistyWoodsKuroController__Fields_DEFINED)
#include <Modloader/app/structs/MistyWoodsKuroController_State__Enum.h>
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_MistyWoodsKuroController_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_MistyWoodsKuroController__Fields_DEFINED
struct MistyWoodsKuroGameplayController;
struct SpriteAnimatorWithTransitions;
struct MistyWoodsKuroController_Animations;
struct SoundSource;
struct MistyWoodsKuroController__Fields {
    struct SaveSerialize__Fields _;
    struct MistyWoodsKuroGameplayController* GameplayController;
    struct SpriteAnimatorWithTransitions* KuroAnimator;
    struct MistyWoodsKuroController_Animations* KuroAnimations;
    struct SoundSource* IdleSound;
    struct SoundSource* ReturningSound;
    MistyWoodsKuroController_State__Enum CurrentState;

    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MistyWoodsKuroController__Fields_FWDDECL)
#define IL2CPP_STRUCT_MistyWoodsKuroController__Fields_FWDDECL
#include <Modloader/app/structs/MistyWoodsKuroController_Animations.h>
#include <Modloader/app/structs/MistyWoodsKuroGameplayController.h>
#include <Modloader/app/structs/SoundSource.h>
#include <Modloader/app/structs/SpriteAnimatorWithTransitions.h>
#endif
#undef IL2CPP_STRUCT_MistyWoodsKuroController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MistyWoodsKuroController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MistyWoodsKuroController__Fields_FWDDECL)
#include <Modloader/app/structs/MistyWoodsKuroController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MistyWoodsKuroController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
