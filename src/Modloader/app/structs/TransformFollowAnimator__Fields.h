#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TransformFollowAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TransformFollowAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransformFollowAnimator__Fields_DEFINED)
#include <Modloader/app/structs/TransformAnimatorEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TransformAnimatorEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_TransformFollowAnimator__Fields_DEFINED
struct UberTransformFollow;
struct TransformFollowAnimator__Fields {
    struct TransformAnimatorEntity__Fields _;
    struct UberTransformFollow* UberTransformFollow;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TransformFollowAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_TransformFollowAnimator__Fields_FWDDECL
#include <Modloader/app/structs/UberTransformFollow.h>
#endif
#undef IL2CPP_STRUCT_TransformFollowAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransformFollowAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TransformFollowAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/TransformFollowAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TransformFollowAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
