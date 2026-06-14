#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SandWormFallReactionBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SandWormFallReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormFallReactionBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityReactionBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_EntityReactionBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SandWormFallReactionBehaviour__Fields_DEFINED
struct SandWormEntity;
struct SandWormLocomotion;
struct SandWormFallReactionBehaviour__Fields {
    struct EntityReactionBehaviour__Fields _;
    struct SandWormEntity* m_wormEntity;
    struct SandWormLocomotion* m_wormLocomotion;
    float DeathOnGroundTime;
    float m_onGroundTimer;
    bool m_onGround;
    float TimeBeforeOffGround;
    float m_timeBeforeOffGround;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SandWormFallReactionBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_SandWormFallReactionBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/SandWormEntity.h>
#include <Modloader/app/structs/SandWormLocomotion.h>
#endif
#undef IL2CPP_STRUCT_SandWormFallReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormFallReactionBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SandWormFallReactionBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/SandWormFallReactionBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SandWormFallReactionBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
