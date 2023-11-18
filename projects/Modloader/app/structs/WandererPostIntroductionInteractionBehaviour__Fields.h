#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WandererPostIntroductionInteractionBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WandererPostIntroductionInteractionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WandererPostIntroductionInteractionBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode__Fields.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode__Fields_DEFINED)
#define IL2CPP_STRUCT_WandererPostIntroductionInteractionBehaviour__Fields_DEFINED
struct WandererEntity;
struct GroundEntityLocomotion;
struct WandererTurningBehaviour;
struct WandererNPC;
struct WandererPostIntroductionInteractionBehaviour__Fields {
    struct EntityBehaviourNode__Fields _;
    struct WandererEntity* m_wandererEntity;
    struct GroundEntityLocomotion* m_locomotion;
    struct WandererTurningBehaviour* m_turningBehaviour;
    struct WandererNPC* m_npc;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WandererPostIntroductionInteractionBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_WandererPostIntroductionInteractionBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/WandererEntity.h>
#include <Modloader/app/structs/WandererNPC.h>
#include <Modloader/app/structs/WandererTurningBehaviour.h>
#endif
#undef IL2CPP_STRUCT_WandererPostIntroductionInteractionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WandererPostIntroductionInteractionBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WandererPostIntroductionInteractionBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/WandererPostIntroductionInteractionBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WandererPostIntroductionInteractionBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
