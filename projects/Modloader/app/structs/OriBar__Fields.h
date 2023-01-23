#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OriBar__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OriBar__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OriBar__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_OriBar__Fields_DEFINED
struct Func_1_Boolean_;
struct FloatValueProvider;
struct Renderer;
struct Renderer__Array;
struct MoonTimeline;
struct GameObject;
struct OriBar__Fields {
    struct MonoBehaviour__Fields _;
    struct Func_1_Boolean_* m_shouldShow;
    struct Vector2 BackgroundBarOffsetMax;
    struct Vector2 BackgroundBarOffsetMin;
    struct Vector2 BarOffsetMax;
    struct Vector2 BarOffsetMin;
    struct Vector2 DamageBarOffsetMax;
    struct Vector2 DamageBarOffsetMin;
    struct Vector2 DamageBarLowerOffsetMax;
    struct Vector2 DamageBarLowerOffsetMin;
    struct Vector2 GlowOffsetMax;
    struct Vector2 GlowOffsetMin;
    struct Vector2 SparkOffsetMax;
    struct Vector2 SparkOffsetMin;
    struct FloatValueProvider* CurrentValueProvider;
    struct FloatValueProvider* MaxValueProvider;
    float ValueChangeRate;
    float ValueFreezeTime;
    struct Renderer* BackgroundRenderer;
    struct Renderer* BarRenderer;
    struct Renderer* BarDamageRenderer;
    struct Renderer__Array* BarGlowRenderer;
    struct Renderer* SparkRenderer;
    struct MoonTimeline* ShowTimeline;
    struct MoonTimeline* HideTimeline;
    struct GameObject* BarVisualsParent;
    float m_currentMinValue;
    float m_currentMaxValue;
    float m_capMinValue;
    float m_capMaxValue;
    float m_lastChange;
    bool m_visible;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OriBar__Fields_FWDDECL)
#define IL2CPP_STRUCT_OriBar__Fields_FWDDECL
#include <Modloader/app/structs/FloatValueProvider.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/Renderer__Array.h>
#endif
#undef IL2CPP_STRUCT_OriBar__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OriBar__Fields_DEFINED) && !defined(IL2CPP_STRUCT_OriBar__Fields_FWDDECL)
#include <Modloader/app/structs/OriBar__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OriBar__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
