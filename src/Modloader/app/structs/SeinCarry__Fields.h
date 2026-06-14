#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinCarry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinCarry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinCarry__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinCarry__Fields_DEFINED
struct HorizontalPlatformMovementSettings_SpeedMultiplierSet;
struct SeinCarry_CarryAnimations;
struct SurfaceToSoundProviderMap;
struct StateMachine_2;
struct Varying2DSoundProvider;
struct SeinCarry_States;
struct Transform;
struct ICarryable;
struct SeinCarry__Fields {
    struct CharacterState__Fields _;
    struct HorizontalPlatformMovementSettings_SpeedMultiplierSet* AirMultiplier;
    struct SeinCarry_CarryAnimations* Animations;
    float CarryRange;
    struct SurfaceToSoundProviderMap* FootstepsSoundProvider;
    struct HorizontalPlatformMovementSettings_SpeedMultiplierSet* GroundMultiplier;
    struct StateMachine_2* Logic;
    struct Varying2DSoundProvider* OnPickupSoundProvider;
    struct SeinCarry_States* State;
    float WalkSoundsPerSecond;
    bool _LockDroppingObject_k__BackingField;
    bool m_lastButtonOverrideActive;
    struct Transform* m_crossHair;
    struct ICarryable* m_currentCarryable;
    bool m_lockPlayer;
    float m_nextWalkTime;
    float m_pressedXTime;
    bool m_buttonOverrideActive;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinCarry__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinCarry__Fields_FWDDECL
#include <Modloader/app/structs/HorizontalPlatformMovementSettings_SpeedMultiplierSet.h>
#include <Modloader/app/structs/ICarryable.h>
#include <Modloader/app/structs/SeinCarry_CarryAnimations.h>
#include <Modloader/app/structs/SeinCarry_States.h>
#include <Modloader/app/structs/StateMachine_2.h>
#include <Modloader/app/structs/SurfaceToSoundProviderMap.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Varying2DSoundProvider.h>
#endif
#undef IL2CPP_STRUCT_SeinCarry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinCarry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinCarry__Fields_FWDDECL)
#include <Modloader/app/structs/SeinCarry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinCarry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
