#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SkeetoFallingReactionBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SkeetoFallingReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeetoFallingReactionBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/ReactionFallingBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_ReactionFallingBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SkeetoFallingReactionBehaviour__Fields_DEFINED
struct SkeetoEntity;
struct SkeetoLocomotion;
struct SkeetoDeathReaction;
struct SkeetoFallingReactionBehaviour__Fields {
    struct ReactionFallingBehaviour__Fields _;
    float LandSlowDownRate;
    struct SkeetoEntity* m_skeetoEntity;
    struct SkeetoLocomotion* m_skeetoLocomotion;
    struct SkeetoDeathReaction* _DeathReaction_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SkeetoFallingReactionBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_SkeetoFallingReactionBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/SkeetoDeathReaction.h>
#include <Modloader/app/structs/SkeetoEntity.h>
#include <Modloader/app/structs/SkeetoLocomotion.h>
#endif
#undef IL2CPP_STRUCT_SkeetoFallingReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeetoFallingReactionBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SkeetoFallingReactionBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/SkeetoFallingReactionBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SkeetoFallingReactionBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
