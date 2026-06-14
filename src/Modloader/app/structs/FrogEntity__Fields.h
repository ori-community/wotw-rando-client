#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FrogEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FrogEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrogEntity__Fields_DEFINED)
#include <Modloader/app/structs/EnemyEntity__Fields.h>
#if defined(IL2CPP_STRUCT_EnemyEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_FrogEntity__Fields_DEFINED
struct DieOnTouch;
struct FrogDeathReactionBehaviour;
struct DelayedAction;
struct FrogGroundLocomotion;
struct Rigidbody;
struct FrogGroup;
struct FrogEntity__Fields {
    struct EnemyEntity__Fields _;
    struct DieOnTouch* DieOnTouch;
    struct FrogDeathReactionBehaviour* DeathReaction;
    struct DelayedAction* m_delayedTurnOnDieOnTouch;
    struct FrogGroundLocomotion* m_groundLocomotion;
    bool m_explodeOnCollision;
    float m_explodeOnCollisionDelayLeft;
    struct Rigidbody* m_rigidbody;
    struct FrogGroup* _Group_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FrogEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_FrogEntity__Fields_FWDDECL
#include <Modloader/app/structs/DelayedAction.h>
#include <Modloader/app/structs/DieOnTouch.h>
#include <Modloader/app/structs/FrogDeathReactionBehaviour.h>
#include <Modloader/app/structs/FrogGroundLocomotion.h>
#include <Modloader/app/structs/FrogGroup.h>
#include <Modloader/app/structs/Rigidbody.h>
#endif
#undef IL2CPP_STRUCT_FrogEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrogEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FrogEntity__Fields_FWDDECL)
#include <Modloader/app/structs/FrogEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FrogEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
