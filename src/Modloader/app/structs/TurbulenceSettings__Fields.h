#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TurbulenceSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TurbulenceSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurbulenceSettings__Fields_DEFINED)
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED)
#define IL2CPP_STRUCT_TurbulenceSettings__Fields_DEFINED
struct AnimationCurve;
struct Keyframe__Array;
struct Texture2D;
struct TurbulenceSettings__Fields {
    struct ScriptableObject__Fields _;
    struct AnimationCurve* TurbulenceCurve;
    float TurbulenceMagnitude;
    float TurbulenceSpeed;
    float TurbulenceValueOffset;
    struct AnimationCurve* TurbulenceSpeedOverTime;
    struct AnimationCurve* TurbulenceMagnitudeOverTime;
    float Scale;
    float TimeLineStr;
    float TimeLineSpeed;
    struct Keyframe__Array* m_keys;
    struct Texture2D* m_turbulenceTexture;
    bool m_didCalcDuration;
    float m_duration;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TurbulenceSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_TurbulenceSettings__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Keyframe__Array.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_TurbulenceSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurbulenceSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TurbulenceSettings__Fields_FWDDECL)
#include <Modloader/app/structs/TurbulenceSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TurbulenceSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
