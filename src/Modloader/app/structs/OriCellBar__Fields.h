#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OriCellBar__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OriCellBar__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OriCellBar__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_OriCellBar__Fields_DEFINED
struct Func_1_Boolean_;
struct GameObject;
struct OriCell__Array;
struct GameObject__Array;
struct FloatValueProvider;
struct Renderer__Array;
struct Renderer;
struct MoonTimeline;
struct ParticleSystem;
struct SeinGlowSpell;
struct OriCellBar__Fields {
    struct MonoBehaviour__Fields _;
    struct Func_1_Boolean_* m_shouldShow;
    struct GameObject* NewCellEffectPrefab;
    struct OriCell__Array* Cells;
    struct GameObject__Array* Backgrounds;
    struct GameObject__Array* Health;
    struct GameObject__Array* Damage;
    struct GameObject__Array* Shield;
    struct Vector2 GlowOffsetMax;
    struct Vector2 GlowOffsetMin;
    struct Vector2 SparkOffsetMax;
    struct Vector2 SparkOffsetMin;
    struct FloatValueProvider* CurrentValueProvider;
    struct FloatValueProvider* MaxValueProvider;
    struct FloatValueProvider* MaxUnshieldedValueProvider;
    float ValueChangeRate;
    float ValueFreezeTime;
    struct Renderer__Array* BarGlowRenderer;
    struct Renderer* SparkRenderer;
    struct MoonTimeline* ShowTimeline;
    struct MoonTimeline* HideTimeline;
    struct GameObject* BarVisualsParent;
    struct GameObject* GlowScale;
    struct Vector2 GlowScaleMin;
    struct Vector2 GlowScaleMax;
    bool nextDrainUsesDrain1;
    struct GameObject* DrainObject1;
    struct GameObject* DrainObject2;
    struct ParticleSystem* Drain1Start;
    struct MoonTimeline* Drain1Cancel;
    struct MoonTimeline* Drain1End;
    struct ParticleSystem* Drain2Start;
    struct MoonTimeline* Drain2Cancel;
    struct MoonTimeline* Drain2End;
    float m_currentMinValue;
    float m_currentMaxValue;
    float m_capMinValue;
    float m_capMaxValue;
    float m_firstChange;
    float m_lastChange;
    bool m_visible;
    bool m_firstUpdate;
    float m_cachedCurrentValue;
    float m_cachedMaxValue;
    float m_cachedMaxUnshieldedValue;
    bool m_dirtiedShardState;
    float m_lastDrainCheck;
    bool m_wasDraining;
    float m_maxDrainScale;
    float m_minDrainScale;
    struct SeinGlowSpell* m_glow;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OriCellBar__Fields_FWDDECL)
#define IL2CPP_STRUCT_OriCellBar__Fields_FWDDECL
#include <Modloader/app/structs/FloatValueProvider.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GameObject__Array.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/OriCell__Array.h>
#include <Modloader/app/structs/ParticleSystem.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/Renderer__Array.h>
#include <Modloader/app/structs/SeinGlowSpell.h>
#endif
#undef IL2CPP_STRUCT_OriCellBar__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OriCellBar__Fields_DEFINED) && !defined(IL2CPP_STRUCT_OriCellBar__Fields_FWDDECL)
#include <Modloader/app/structs/OriCellBar__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OriCellBar__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
