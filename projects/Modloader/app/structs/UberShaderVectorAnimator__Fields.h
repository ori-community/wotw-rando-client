#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderVectorAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderVectorAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderVectorAnimator__Fields_DEFINED)
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#include <Modloader/app/structs/UberShaderVectorAnimator_VectorProperty__Enum.h>
#include <Modloader/app/structs/Vector4.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector4_DEFINED) && defined(IL2CPP_STRUCT_UberShaderVectorAnimator_VectorProperty__Enum_DEFINED)
#define IL2CPP_STRUCT_UberShaderVectorAnimator__Fields_DEFINED
struct MoonReference_1_UnityEngine_GameObject_;
struct AnimationCurve;
struct Renderer__Array;
struct UberShaderVectorAnimator__Fields {
    struct TimelineEntity__Fields _;
    struct MoonReference_1_UnityEngine_GameObject_* Target;
    bool AnimateChildren;
    struct Vector4 TargetValue;
    bool MaskX;
    bool MaskY;
    bool MaskZ;
    bool MaskW;
    struct AnimationCurve* Curve;
    UberShaderVectorAnimator_VectorProperty__Enum Property;

    float m_time;
    struct Renderer__Array* m_entries;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberShaderVectorAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberShaderVectorAnimator__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/Renderer__Array.h>
#endif
#undef IL2CPP_STRUCT_UberShaderVectorAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderVectorAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderVectorAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/UberShaderVectorAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderVectorAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
