#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonAnimator_AnimatorPostprocessData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonAnimator_AnimatorPostprocessData_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimator_AnimatorPostprocessData_DEFINED)
#include <Modloader/app/structs/Playable.h>
#if defined(IL2CPP_STRUCT_Playable_DEFINED)
#define IL2CPP_STRUCT_MoonAnimator_AnimatorPostprocessData_DEFINED
struct IAnimatorPostprocessBase;
struct MoonAnimator_AnimatorPostprocessData {
    struct IAnimatorPostprocessBase* Postprocess;
    struct Playable Playable;
    bool Removed;
    float BlendDuration;
    float Weight;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonAnimator_AnimatorPostprocessData_FWDDECL)
#define IL2CPP_STRUCT_MoonAnimator_AnimatorPostprocessData_FWDDECL
#include <Modloader/app/structs/IAnimatorPostprocessBase.h>
#endif
#undef IL2CPP_STRUCT_MoonAnimator_AnimatorPostprocessData_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimator_AnimatorPostprocessData_DEFINED) && !defined(IL2CPP_STRUCT_MoonAnimator_AnimatorPostprocessData_FWDDECL)
#include <Modloader/app/structs/MoonAnimator_AnimatorPostprocessData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonAnimator_AnimatorPostprocessData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
