#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonAnimatorSystem__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonAnimatorSystem__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimatorSystem__StaticFields_DEFINED)
#define IL2CPP_STRUCT_MoonAnimatorSystem__StaticFields_DEFINED
struct List_1_Moon_MoonAnimator_;
struct MoonAnimatorSystem;
struct MoonAnimatorSystem_AnimatorPriorityComparer;
struct MoonAnimatorSystem__StaticFields {
    struct List_1_Moon_MoonAnimator_* m_previewMoonAnimators;
    bool EnablePostprocessUpdate;
    bool EnablePostAnimationCullingOptimization;
    struct MoonAnimatorSystem* m_instance;
    struct MoonAnimatorSystem_AnimatorPriorityComparer* m_animatorPriorityComparer;
};
#endif
#if !defined(IL2CPP_STRUCT_MoonAnimatorSystem__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_MoonAnimatorSystem__StaticFields_FWDDECL
#include <Modloader/app/structs/List_1_Moon_MoonAnimator_.h>
#include <Modloader/app/structs/MoonAnimatorSystem.h>
#include <Modloader/app/structs/MoonAnimatorSystem_AnimatorPriorityComparer.h>
#endif
#undef IL2CPP_STRUCT_MoonAnimatorSystem__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimatorSystem__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_MoonAnimatorSystem__StaticFields_FWDDECL)
#include <Modloader/app/structs/MoonAnimatorSystem__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonAnimatorSystem__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
