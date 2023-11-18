#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShellSlugKickupAndStunReactionBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShellSlugKickupAndStunReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShellSlugKickupAndStunReactionBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/UpperKickReactionBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_UpperKickReactionBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_ShellSlugKickupAndStunReactionBehaviour__Fields_DEFINED
struct EntityTask;
struct SpikeSlugLocomotion;
struct SpikeSlugEntity;
struct ShellSlugKickupAndStunReactionBehaviour__Fields {
    struct UpperKickReactionBehaviour__Fields _;
    struct EntityTask* StunnedBehaviour;
    float AirSpinRotationAmount;
    bool m_shouldSkipUpdate;
    struct SpikeSlugLocomotion* m_slugLocomotion;
    struct SpikeSlugEntity* m_slug;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShellSlugKickupAndStunReactionBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_ShellSlugKickupAndStunReactionBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/EntityTask.h>
#include <Modloader/app/structs/SpikeSlugEntity.h>
#include <Modloader/app/structs/SpikeSlugLocomotion.h>
#endif
#undef IL2CPP_STRUCT_ShellSlugKickupAndStunReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShellSlugKickupAndStunReactionBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ShellSlugKickupAndStunReactionBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/ShellSlugKickupAndStunReactionBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShellSlugKickupAndStunReactionBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
