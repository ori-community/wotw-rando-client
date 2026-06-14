#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinRun__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinRun__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinRun__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/SeinRun_State__Enum.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_SeinRun_State__Enum_DEFINED)
#define IL2CPP_STRUCT_SeinRun__Fields_DEFINED
struct AnimationCurve;
struct Func_1_Boolean_;
struct SeinRun__Fields {
    struct CharacterState__Fields _;
    float JogThreshold;
    float WalkThreshold;
    struct AnimationCurve* InputCurve;
    struct AnimationCurve* RunAnimationSpeed;
    struct AnimationCurve* JogAnimationSpeed;
    struct AnimationCurve* WalkAnimationSpeed;
    float m_horizontalInputDelay;
    float m_SharpTurnTimer;
    float m_lastInputDirection;
    bool m_wasFacingLeft;
    SeinRun_State__Enum CurrentState;

    struct Func_1_Boolean_* m_shouldRunPlay;
    struct Func_1_Boolean_* m_shouldJogPlay;
    struct Func_1_Boolean_* m_shouldWalkPlay;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinRun__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinRun__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#endif
#undef IL2CPP_STRUCT_SeinRun__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinRun__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinRun__Fields_FWDDECL)
#include <Modloader/app/structs/SeinRun__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinRun__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
