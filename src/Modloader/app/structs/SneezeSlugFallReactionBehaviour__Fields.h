#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SneezeSlugFallReactionBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SneezeSlugFallReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SneezeSlugFallReactionBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/ReactionFallingBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_ReactionFallingBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SneezeSlugFallReactionBehaviour__Fields_DEFINED
struct SneezeSlugHitReactionBehaviour;
struct SneezeSlugFallReactionBehaviour__Fields {
    struct ReactionFallingBehaviour__Fields _;
    struct SneezeSlugHitReactionBehaviour* HitReaction;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SneezeSlugFallReactionBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_SneezeSlugFallReactionBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/SneezeSlugHitReactionBehaviour.h>
#endif
#undef IL2CPP_STRUCT_SneezeSlugFallReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SneezeSlugFallReactionBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SneezeSlugFallReactionBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/SneezeSlugFallReactionBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SneezeSlugFallReactionBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
