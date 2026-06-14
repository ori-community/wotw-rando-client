#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BossHealthbar2__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BossHealthbar2__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BossHealthbar2__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_BossHealthbar2__Fields_DEFINED
struct BossesNamesMessages;
struct Func_1_Boolean_;
struct VitalsHealthProvider;
struct FloatValueProvider;
struct Renderer;
struct MoonTimeline;
struct GameObject;
struct MessageBox;
struct BossHealthbar2__Fields {
    struct MonoBehaviour__Fields _;
    struct BossesNamesMessages* BossNames;
    struct Func_1_Boolean_* m_shouldShow;
    struct Vector2 HealthBarOffsetMax;
    struct Vector2 HealthBarOffsetMin;
    struct Vector2 DamageBarOffsetMax;
    struct Vector2 DamageBarOffsetMin;
    struct Vector2 DamageBarLowerOffsetMax;
    struct Vector2 DamageBarLowerOffsetMin;
    struct VitalsHealthProvider* VitalsProvider;
    struct FloatValueProvider* ValueProvider;
    float ValueChangeRate;
    float ValueFreezeTime;
    struct Renderer* BarRenderer;
    struct Renderer* BarDamageRenderer;
    struct MoonTimeline* ShowTimeline;
    struct MoonTimeline* HideTimeline;
    struct GameObject* BarVisualsParent;
    struct MessageBox* BossName;
    float m_minValue;
    float m_maxValue;
    float m_lastChange;
    bool m_visible;
    bool m_postRestoreNextFrameUpdateNeeded;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BossHealthbar2__Fields_FWDDECL)
#define IL2CPP_STRUCT_BossHealthbar2__Fields_FWDDECL
#include <Modloader/app/structs/BossesNamesMessages.h>
#include <Modloader/app/structs/FloatValueProvider.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/VitalsHealthProvider.h>
#endif
#undef IL2CPP_STRUCT_BossHealthbar2__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BossHealthbar2__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BossHealthbar2__Fields_FWDDECL)
#include <Modloader/app/structs/BossHealthbar2__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BossHealthbar2__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
