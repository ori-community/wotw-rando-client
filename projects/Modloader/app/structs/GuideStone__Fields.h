#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GuideStone__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GuideStone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GuideStone__Fields_DEFINED)
#include <Modloader/app/structs/GuideStone_GuideStoneState__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_GuideStone_GuideStoneState__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_GuideStone__Fields_DEFINED
struct MessageProvider;
struct Transform;
struct Condition_1;
struct MessageBox;
struct MoonTimeline;
struct Renderer__Array;
struct GuideStone__Fields {
    struct MonoBehaviour__Fields _;
    float AnimationTime;
    struct Vector2 Direction1Shift;
    struct Vector2 Direction2Shift;
    struct Vector2 Direction3Shift;
    struct MessageProvider* Direction1MessageProvider;
    struct MessageProvider* Direction2MessageProvider;
    struct MessageProvider* Direction3MessageProvider;
    struct Transform* FadeTarget;
    struct Condition_1* GuidelinesTrigger;
    struct Transform* Direction1Transform;
    struct Transform* Direction2Transform;
    struct Transform* Direction3Transform;
    struct MessageBox* Direction1MessageBox;
    struct MessageBox* Direction2MessageBox;
    struct MessageBox* Direction3MessageBox;
    struct MoonTimeline* OnEnterTimeline;
    struct MoonTimeline* OnExitTimeline;
    GuideStone_GuideStoneState__Enum m_state;

    struct Renderer__Array* m_renderers;
    bool m_renderersCollected;
    float m_currentTime;
    float m_lastNormalizedTime;
    struct Vector3 m_direction1InitPos;
    struct Vector3 m_direction2InitPos;
    struct Vector3 m_direction3InitPos;
    bool m_hasDirection1Transform;
    bool m_hasDirection2Transform;
    bool m_hasDirection3Transform;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GuideStone__Fields_FWDDECL)
#define IL2CPP_STRUCT_GuideStone__Fields_FWDDECL
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Renderer__Array.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_GuideStone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GuideStone__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GuideStone__Fields_FWDDECL)
#include <Modloader/app/structs/GuideStone__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GuideStone__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
