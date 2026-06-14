#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Ku__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Ku__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Ku__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED)
#define IL2CPP_STRUCT_Ku__Fields_DEFINED
struct SoundBankEntry;
struct KuAbilities;
struct KuController;
struct KuLogicCycle;
struct PlatformBehaviour;
struct Transform;
struct PlayerInsideZoneChecker;
struct CharacterCinematic;
struct Event_1;
struct ConditionUberState;
struct SoundHost;
struct RTPC;
struct DynamicDataResolver;
struct Action;
struct DamageOwner;
struct CharacterAnimationSystem;
struct Ku__Fields {
    struct MonoBehaviour__Fields _;
    struct SoundBankEntry* SoundBank;
    struct KuAbilities* Abilities;
    struct KuController* Controller;
    struct KuLogicCycle* LogicCycle;
    struct PlatformBehaviour* PlatformBehaviour;
    struct Transform* RidingAttachingPoint;
    struct Transform* RootTransform;
    struct PlayerInsideZoneChecker* CarryOriTrigger;
    struct CharacterCinematic* KuCinematic;
    struct Event_1* DeathWwiseEvent;
    struct Transform* KuFeather;
    bool EnablePerspectiveAdjustment;
    struct ConditionUberState* KuIsDeadUberState;
    struct SoundHost* KuSoundHost;
    struct RTPC* KuAbsHorizontalSpeedRtpc;
    struct RTPC* KuVerticalSpeedRtpc;
    struct Transform* CollectableDetectorTransform;
    float CollectableDetectorRadius;
    struct DynamicDataResolver* m_dataResolver;
    bool _IsCarrying_k__BackingField;
    struct Action* OnResetAirLimits;
    struct DamageOwner* _DamageOwner_k__BackingField;
    struct CharacterAnimationSystem* _Animation_k__BackingField;
    struct ActiveAnimationHandle m_currentAnimation;
    struct SoundHost* m_soundHost;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Ku__Fields_FWDDECL)
#define IL2CPP_STRUCT_Ku__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/CharacterAnimationSystem.h>
#include <Modloader/app/structs/CharacterCinematic.h>
#include <Modloader/app/structs/ConditionUberState.h>
#include <Modloader/app/structs/DamageOwner.h>
#include <Modloader/app/structs/DynamicDataResolver.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/KuAbilities.h>
#include <Modloader/app/structs/KuController.h>
#include <Modloader/app/structs/KuLogicCycle.h>
#include <Modloader/app/structs/PlatformBehaviour.h>
#include <Modloader/app/structs/PlayerInsideZoneChecker.h>
#include <Modloader/app/structs/RTPC.h>
#include <Modloader/app/structs/SoundBankEntry.h>
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_Ku__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Ku__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Ku__Fields_FWDDECL)
#include <Modloader/app/structs/Ku__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Ku__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
