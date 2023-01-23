#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KamikazeLizardHitReactionBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KamikazeLizardHitReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KamikazeLizardHitReactionBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/LizardHitReactionBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_LizardHitReactionBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_KamikazeLizardHitReactionBehaviour__Fields_DEFINED
struct MoonTimeline;
struct KamikazeLizardEntity;
struct KamikazeLizardHitReactionBehaviour__Fields {
    struct LizardHitReactionBehaviour__Fields _;
    struct MoonTimeline* HitWhenRolling;
    struct KamikazeLizardEntity* m_kamikazeLizardEntity;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KamikazeLizardHitReactionBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_KamikazeLizardHitReactionBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/KamikazeLizardEntity.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_KamikazeLizardHitReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KamikazeLizardHitReactionBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KamikazeLizardHitReactionBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/KamikazeLizardHitReactionBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KamikazeLizardHitReactionBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
