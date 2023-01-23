#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HealthBar__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HealthBar__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HealthBar__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector4.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED) && defined(IL2CPP_STRUCT_Vector4_DEFINED)
#define IL2CPP_STRUCT_HealthBar__Fields_DEFINED
struct AnimationCurve;
struct FloatValueProvider;
struct Renderer;
struct Transform;
struct HealthBar__Fields {
    struct MonoBehaviour__Fields _;
    struct AnimationCurve* MinTransitionCurve;
    struct AnimationCurve* MaxTransitionCurve;
    struct FloatValueProvider* ValueProvider;
    struct Renderer* MinBarRenderer;
    struct Renderer* MaxBarRenderer;
    struct Renderer* BackBarRenderer;
    bool AnimateColors;
    struct Color m_MinBarGreenColor;
    struct Color m_MinBarYellowColor;
    struct Color m_MinBarRedColor;
    struct Color m_MaxBarColor;
    struct Color m_BackgroundColor;
    struct Color m_minBarOriginalColor;
    struct Color m_maxBarOriginalColor;
    struct Vector4 m_barMaskOriginalOffset;
    float MaskOffset;
    float MaskMultiplier;
    float m_minTransitionCurveDuration;
    float m_maxTransitionCurveDuration;
    struct Transform* m_myTransform;
    bool m_cachedOriginals;
    float m_displayedValue;
    float m_maxValue;
    float m_time;
    float m_alpha;
    bool m_shouldUpdateColors;
    bool m_showBar;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HealthBar__Fields_FWDDECL)
#define IL2CPP_STRUCT_HealthBar__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/FloatValueProvider.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_HealthBar__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HealthBar__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HealthBar__Fields_FWDDECL)
#include <Modloader/app/structs/HealthBar__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HealthBar__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
