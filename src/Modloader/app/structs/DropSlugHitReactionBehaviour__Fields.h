#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DropSlugHitReactionBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DropSlugHitReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DropSlugHitReactionBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityHitReactionBehaviour_1_DropSlugEntity___Fields.h>
#if defined(IL2CPP_STRUCT_EntityHitReactionBehaviour_1_DropSlugEntity___Fields_DEFINED)
#define IL2CPP_STRUCT_DropSlugHitReactionBehaviour__Fields_DEFINED
struct DropSlugLocomotion;
struct DropSlugHitReactionBehaviour__Fields {
    struct EntityHitReactionBehaviour_1_DropSlugEntity___Fields _;
    float KickbackMultiplier;
    float ThrownKickbackMultiplier;
    float WindKickbackMultiplier;
    float SpinRotationSpeed;
    struct DropSlugLocomotion* m_locomotion;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DropSlugHitReactionBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_DropSlugHitReactionBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/DropSlugLocomotion.h>
#endif
#undef IL2CPP_STRUCT_DropSlugHitReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DropSlugHitReactionBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DropSlugHitReactionBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/DropSlugHitReactionBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DropSlugHitReactionBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
