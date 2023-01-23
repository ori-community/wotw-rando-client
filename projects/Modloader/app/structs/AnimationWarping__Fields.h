#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationWarping__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationWarping__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationWarping__Fields_DEFINED)
#include <Modloader/app/structs/AnimationWarping_EffectorMode__Enum.h>
#include <Modloader/app/structs/OffsetModifier__Fields.h>
#if defined(IL2CPP_STRUCT_OffsetModifier__Fields_DEFINED) && defined(IL2CPP_STRUCT_AnimationWarping_EffectorMode__Enum_DEFINED)
#define IL2CPP_STRUCT_AnimationWarping__Fields_DEFINED
struct Animator;
struct AnimationWarping_Warp__Array;
struct AnimationWarping__Fields {
    struct OffsetModifier__Fields _;
    struct Animator* animator;
    AnimationWarping_EffectorMode__Enum effectorMode;

    struct AnimationWarping_Warp__Array* warps;
    AnimationWarping_EffectorMode__Enum lastMode;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimationWarping__Fields_FWDDECL)
#define IL2CPP_STRUCT_AnimationWarping__Fields_FWDDECL
#include <Modloader/app/structs/AnimationWarping_Warp__Array.h>
#include <Modloader/app/structs/Animator.h>
#endif
#undef IL2CPP_STRUCT_AnimationWarping__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationWarping__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AnimationWarping__Fields_FWDDECL)
#include <Modloader/app/structs/AnimationWarping__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationWarping__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
