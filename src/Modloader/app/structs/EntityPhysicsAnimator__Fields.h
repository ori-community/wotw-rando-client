#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityPhysicsAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityPhysicsAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityPhysicsAnimator__Fields_DEFINED)
#include <Modloader/app/structs/EntityPhysicsAnimator_DirectionSource__Enum.h>
#include <Modloader/app/structs/EventTriggerAnimator__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EventTriggerAnimator__Fields_DEFINED) && defined(IL2CPP_STRUCT_EntityPhysicsAnimator_DirectionSource__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_EntityPhysicsAnimator__Fields_DEFINED
struct Entity;
struct CharacterPlatformMovement;
struct MovementProcessor;
struct EntityPhysicsAnimator__Fields {
    struct EventTriggerAnimator__Fields _;
    struct Entity* Entity;
    bool Additive;
    bool Local;
    EntityPhysicsAnimator_DirectionSource__Enum ImpulseDirectionSource;

    bool StopLocomotion;
    struct Vector3 ImpulseDirection;
    float ImpulseMultiplier;
    EntityPhysicsAnimator_DirectionSource__Enum MovementDirectionSource;

    struct Vector3 MovementDirection;
    float MovementMultiplier;
    bool RevertMovement;
    bool UseAngledMovement;
    bool ClampTowardsFacingDirection;
    struct Vector3 m_prevMovement;
    float MinMagnitude;
    float MaxMagnitude;
    bool LockFreeRotation;
    bool prevAllowFreeRotation;
    struct CharacterPlatformMovement* m_movement;
    struct MovementProcessor* m_movementProcessor;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityPhysicsAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_EntityPhysicsAnimator__Fields_FWDDECL
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/MovementProcessor.h>
#endif
#undef IL2CPP_STRUCT_EntityPhysicsAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityPhysicsAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EntityPhysicsAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/EntityPhysicsAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityPhysicsAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
