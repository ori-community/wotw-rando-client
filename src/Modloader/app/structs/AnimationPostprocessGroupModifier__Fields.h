#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationPostprocessGroupModifier__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationPostprocessGroupModifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationPostprocessGroupModifier__Fields_DEFINED)
#define IL2CPP_STRUCT_AnimationPostprocessGroupModifier__Fields_DEFINED
struct AnimationPostprocessGroup;
struct __declspec(align(8)) AnimationPostprocessGroupModifier__Fields {
    struct AnimationPostprocessGroup* Group;
    bool Enable;
    float BlendInDuration;
    float BlendOutDuration;
};
#endif
#if !defined(IL2CPP_STRUCT_AnimationPostprocessGroupModifier__Fields_FWDDECL)
#define IL2CPP_STRUCT_AnimationPostprocessGroupModifier__Fields_FWDDECL
#include <Modloader/app/structs/AnimationPostprocessGroup.h>
#endif
#undef IL2CPP_STRUCT_AnimationPostprocessGroupModifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationPostprocessGroupModifier__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AnimationPostprocessGroupModifier__Fields_FWDDECL)
#include <Modloader/app/structs/AnimationPostprocessGroupModifier__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationPostprocessGroupModifier__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
