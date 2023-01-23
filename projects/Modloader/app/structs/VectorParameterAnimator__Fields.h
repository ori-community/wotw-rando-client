#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VectorParameterAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VectorParameterAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VectorParameterAnimator__Fields_DEFINED)
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_VectorParameterAnimator__Fields_DEFINED
struct VectorAnimationParameter;
struct MoonReference_1_MoonAnimator_;
struct MoonAnimator;
struct VectorParameterAnimator__Fields {
    struct TimelineEntity__Fields _;
    struct VectorAnimationParameter* Parameter;
    struct Vector3 ParameterValue;
    struct MoonReference_1_MoonAnimator_* Animator;
    struct MoonAnimator* m_moonAnimator;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VectorParameterAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_VectorParameterAnimator__Fields_FWDDECL
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/MoonReference_1_MoonAnimator_.h>
#include <Modloader/app/structs/VectorAnimationParameter.h>
#endif
#undef IL2CPP_STRUCT_VectorParameterAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VectorParameterAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VectorParameterAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/VectorParameterAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VectorParameterAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
