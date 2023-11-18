#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MistyWoodsKuroGameplayController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MistyWoodsKuroGameplayController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MistyWoodsKuroGameplayController__Fields_DEFINED)
#include <Modloader/app/structs/MistyWoodsKuroGameplayController_State__Enum.h>
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_MistyWoodsKuroGameplayController_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_MistyWoodsKuroGameplayController__Fields_DEFINED
struct MistyWoodsKuroController;
struct ActionMethod;
struct BaseAnimator;
struct SoundProvider;
struct SoundPlayer;
struct GameObject;
struct CatAndMouseKuroLandZone__Array;
struct Transform__Array;
struct MistyWoodsKuroGameplayController__Fields {
    struct SaveSerialize__Fields _;
    struct MistyWoodsKuroController* MistyWoodsKuroController;
    struct ActionMethod* OnHideAction;
    struct ActionMethod* OnVisibleAction;
    struct BaseAnimator* VisibilityAnimator;
    float HiddenSoundFadeOutDuration;
    struct SoundProvider* HiddenSoundProvider;
    float VisibleSoundFadeOutDuration;
    struct SoundProvider* VisibleSoundProvider;
    float TimeToHide;
    struct SoundPlayer* m_previousSound;
    float m_currentTime;
    struct SoundProvider* LandKillSound;
    struct SoundProvider* FlyKillSound;
    struct GameObject* KuroFlyAttack;
    struct CatAndMouseKuroLandZone__Array* m_zones;
    struct Transform__Array* InstaKillZones;
    MistyWoodsKuroGameplayController_State__Enum m_currentState;

    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MistyWoodsKuroGameplayController__Fields_FWDDECL)
#define IL2CPP_STRUCT_MistyWoodsKuroGameplayController__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/CatAndMouseKuroLandZone__Array.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MistyWoodsKuroController.h>
#include <Modloader/app/structs/SoundPlayer.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/Transform__Array.h>
#endif
#undef IL2CPP_STRUCT_MistyWoodsKuroGameplayController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MistyWoodsKuroGameplayController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MistyWoodsKuroGameplayController__Fields_FWDDECL)
#include <Modloader/app/structs/MistyWoodsKuroGameplayController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MistyWoodsKuroGameplayController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
