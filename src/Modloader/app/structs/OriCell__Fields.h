#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OriCell__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OriCell__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OriCell__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_OriCell__Fields_DEFINED
struct Func_1_Boolean_;
struct Renderer;
struct MoonTimeline;
struct OriCell__Fields {
    struct MonoBehaviour__Fields _;
    struct Func_1_Boolean_* m_shouldShow;
    float CellBaseValue;
    struct Vector2 BackgroundBarOffsetMax;
    struct Vector2 BackgroundBarOffsetMin;
    struct Vector2 BarOffsetMax;
    struct Vector2 BarOffsetMin;
    struct Vector2 DamageBarOffsetMax;
    struct Vector2 DamageBarOffsetMin;
    struct Vector2 DamageBarLowerOffsetMax;
    struct Vector2 DamageBarLowerOffsetMin;
    float _CurrentValue_k__BackingField;
    float _MaxValue_k__BackingField;
    bool DebugUpdate;
    float ValueChangeRate;
    float ValueFreezeTime;
    struct Renderer* BackgroundRenderer;
    struct Renderer* BarRenderer;
    struct Renderer* BarDamageRenderer;
    struct Renderer* BarShieldRenderer;
    struct MoonTimeline* ShowTimeline;
    struct MoonTimeline* HideTimeline;
    float m_currentMinValue;
    float m_currentMaxValue;
    float m_capMinValue;
    float m_capMaxValue;
    float m_firstChange;
    float m_lastChange;
    bool m_visible;
    bool inRange;
    bool updateVisualsDebug;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OriCell__Fields_FWDDECL)
#define IL2CPP_STRUCT_OriCell__Fields_FWDDECL
#include <Modloader/app/structs/Func_1_Boolean_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Renderer.h>
#endif
#undef IL2CPP_STRUCT_OriCell__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OriCell__Fields_DEFINED) && !defined(IL2CPP_STRUCT_OriCell__Fields_FWDDECL)
#include <Modloader/app/structs/OriCell__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OriCell__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
