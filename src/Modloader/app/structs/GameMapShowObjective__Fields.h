#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameMapShowObjective__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameMapShowObjective__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameMapShowObjective__Fields_DEFINED)
#include <Modloader/app/structs/GameMapShowObjective_State__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_GameMapShowObjective_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_GameMapShowObjective__Fields_DEFINED
struct AnimationCurve;
struct Varying2DSoundProvider;
struct Action;
struct GameObject;
struct Objective;
struct GameMapShowObjective__Fields {
    struct MonoBehaviour__Fields _;
    struct AnimationCurve* IconMovingCurve;
    struct Varying2DSoundProvider* FinishShowObjectiveSound;
    float BlipInterval;
    struct Action* OnFinish;
    float BeginWaitTime;
    float MoveTime;
    float EndWaitTime;
    float AreaMapWaitTime;
    bool m_isPerforming;
    struct GameObject* ObjectiveAppearEffect;
    struct Objective* m_objective;
    GameMapShowObjective_State__Enum CurrentState;

    struct Vector3 StartPosition;
    struct Vector3 TargetPosition;
    struct Vector3 Position;
    float m_stateCurrentTime;
    struct Vector3 m_startPositionUI;
    struct Vector3 m_targetPositionUI;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameMapShowObjective__Fields_FWDDECL)
#define IL2CPP_STRUCT_GameMapShowObjective__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Objective.h>
#include <Modloader/app/structs/Varying2DSoundProvider.h>
#endif
#undef IL2CPP_STRUCT_GameMapShowObjective__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameMapShowObjective__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GameMapShowObjective__Fields_FWDDECL)
#include <Modloader/app/structs/GameMapShowObjective__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameMapShowObjective__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
