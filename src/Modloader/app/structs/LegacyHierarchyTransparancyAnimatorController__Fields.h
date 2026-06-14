#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyHierarchyTransparancyAnimatorController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyHierarchyTransparancyAnimatorController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyHierarchyTransparancyAnimatorController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_LegacyHierarchyTransparancyAnimatorController__Fields_DEFINED
struct AnimationCurve;
struct List_1_LegacyTransparancyAnimator_;
struct LegacyHierarchyTransparancyAnimatorController__Fields {
    struct MonoBehaviour__Fields _;
    struct AnimationCurve* AnimationCurve;
    bool PlayAutomatically;
    bool DeactivateWhenInvisible;
    bool RestartOnEnable;
    float Speed;
    struct List_1_LegacyTransparancyAnimator_* m_list;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyHierarchyTransparancyAnimatorController__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacyHierarchyTransparancyAnimatorController__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/List_1_LegacyTransparancyAnimator_.h>
#endif
#undef IL2CPP_STRUCT_LegacyHierarchyTransparancyAnimatorController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyHierarchyTransparancyAnimatorController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacyHierarchyTransparancyAnimatorController__Fields_FWDDECL)
#include <Modloader/app/structs/LegacyHierarchyTransparancyAnimatorController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyHierarchyTransparancyAnimatorController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
