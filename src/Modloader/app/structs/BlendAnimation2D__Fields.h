#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BlendAnimation2D__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BlendAnimation2D__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlendAnimation2D__Fields_DEFINED)
#include <Modloader/app/structs/BlendAnimationEventMode__Enum.h>
#include <Modloader/app/structs/BlendAnimationMode__Enum.h>
#include <Modloader/app/structs/MoonAnimation__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MoonAnimation__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_BlendAnimationMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_BlendAnimationEventMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_BlendAnimation2D__Fields_DEFINED
struct FloatAnimationParameter;
struct Action_1_Moon_BlendAnimation2D_;
struct Blend2DTriangulationState;
struct Single__Array;
struct Int32__Array;
struct BlendAnimation2D_InputContainer__Array;
struct BlendAnimation2D_Input__Array;
struct BlendAnimation2D__Fields {
    struct MoonAnimation__Fields _;
    struct FloatAnimationParameter* m_parameterX;
    struct FloatAnimationParameter* m_parameterY;
    struct Action_1_Moon_BlendAnimation2D_* OnUpdated;
    struct Blend2DTriangulationState* m_triangulationState;
    struct Vector2 m_currentInput;
    struct Vector2 m_currentParameterVector;
    struct Single__Array* m_currentBlendWeight;
    struct Int32__Array* m_currentBlendNodeIndex;
    int32_t m_activeBlendNodesCount;
    struct BlendAnimation2D_InputContainer__Array* GridInputs;
    struct BlendAnimation2D_Input__Array* Inputs;
    bool UseThreshold;
    float Threshold;
    BlendAnimationMode__Enum Mode;

    BlendAnimationEventMode__Enum AnimationEventMode;

    int32_t m_validInputCount;
    struct BlendAnimation2D_Input__Array* m_validInputs;
    int32_t m_gridNumX;
    int32_t m_gridNumY;
    struct Vector2 m_blendPoint1;
    struct Vector2 m_blendPoint2;
    struct Vector3 m_currentParameter;
    struct Vector3 m_baricentricPoint1;
    struct Vector3 m_baricentricPoint2;
    struct Vector3 m_baricentricPoint3;
    struct Vector3 m_baricentricNumerator;
    struct Vector3 m_baricentricDenumerator;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BlendAnimation2D__Fields_FWDDECL)
#define IL2CPP_STRUCT_BlendAnimation2D__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_Moon_BlendAnimation2D_.h>
#include <Modloader/app/structs/Blend2DTriangulationState.h>
#include <Modloader/app/structs/BlendAnimation2D_InputContainer__Array.h>
#include <Modloader/app/structs/BlendAnimation2D_Input__Array.h>
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Single__Array.h>
#endif
#undef IL2CPP_STRUCT_BlendAnimation2D__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlendAnimation2D__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BlendAnimation2D__Fields_FWDDECL)
#include <Modloader/app/structs/BlendAnimation2D__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BlendAnimation2D__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
