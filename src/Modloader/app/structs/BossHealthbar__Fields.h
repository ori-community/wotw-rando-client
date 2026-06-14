#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BossHealthbar__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BossHealthbar__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BossHealthbar__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_BossHealthbar__Fields_DEFINED
struct FloatValueProvider;
struct BaseAnimator;
struct List_1_LegacyMaterialColorGradientAnimator_;
struct List_1_UnityEngine_Renderer_;
struct MoonTimeline;
struct BossHealthbar__Fields {
    struct MonoBehaviour__Fields _;
    struct FloatValueProvider* ValueProvider;
    struct BaseAnimator* MaxAnimator;
    struct BaseAnimator* MinAnimator;
    struct List_1_LegacyMaterialColorGradientAnimator_* Gradients;
    struct List_1_UnityEngine_Renderer_* m_renderers;
    float ValueChangeRate;
    float m_minValue;
    float m_maxValue;
    struct MoonTimeline* ShowTimeline;
    struct MoonTimeline* HideTimeline;
    bool ForceDefaultPosition;
    bool m_visible;
    struct Vector3 m_lastPosition;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BossHealthbar__Fields_FWDDECL)
#define IL2CPP_STRUCT_BossHealthbar__Fields_FWDDECL
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/FloatValueProvider.h>
#include <Modloader/app/structs/List_1_LegacyMaterialColorGradientAnimator_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Renderer_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_BossHealthbar__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BossHealthbar__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BossHealthbar__Fields_FWDDECL)
#include <Modloader/app/structs/BossHealthbar__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BossHealthbar__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
