#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DropSlugFallReactionBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DropSlugFallReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DropSlugFallReactionBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/ReactionFallingBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_ReactionFallingBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_DropSlugFallReactionBehaviour__Fields_DEFINED
struct FloatAnimationParameter;
struct DropSlugLocomotion;
struct DropSlugFallReactionBehaviour__Fields {
    struct ReactionFallingBehaviour__Fields _;
    struct FloatAnimationParameter* SpinDirection;
    struct FloatAnimationParameter* SpinToFallBlend;
    struct DropSlugLocomotion* m_dropSlugLocomotion;
    bool m_spinning;
    bool m_explode;
    float m_timer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DropSlugFallReactionBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_DropSlugFallReactionBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/DropSlugLocomotion.h>
#include <Modloader/app/structs/FloatAnimationParameter.h>
#endif
#undef IL2CPP_STRUCT_DropSlugFallReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DropSlugFallReactionBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DropSlugFallReactionBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/DropSlugFallReactionBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DropSlugFallReactionBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
