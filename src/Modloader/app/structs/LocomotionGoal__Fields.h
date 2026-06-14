#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LocomotionGoal__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LocomotionGoal__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocomotionGoal__Fields_DEFINED)
#include <Modloader/app/structs/LocomotionGoal_GoalStatus__Enum.h>
#if defined(IL2CPP_STRUCT_LocomotionGoal_GoalStatus__Enum_DEFINED)
#define IL2CPP_STRUCT_LocomotionGoal__Fields_DEFINED
struct Action;
struct Action_1_Moon_LocomotionGoal_GoalStatus_;
struct Func_1_Boolean_;
struct __declspec(align(8)) LocomotionGoal__Fields {
    LocomotionGoal_GoalStatus__Enum Status;

    float CurrentTime;
    struct Action* OnGoalUpdate;
    struct Action_1_Moon_LocomotionGoal_GoalStatus_* OnGoalEnd;
    struct Func_1_Boolean_* SuccessCondition;
    struct Func_1_Boolean_* FailureCondition;
    bool ended;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LocomotionGoal__Fields_FWDDECL)
#define IL2CPP_STRUCT_LocomotionGoal__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_1_Moon_LocomotionGoal_GoalStatus_.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#endif
#undef IL2CPP_STRUCT_LocomotionGoal__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocomotionGoal__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LocomotionGoal__Fields_FWDDECL)
#include <Modloader/app/structs/LocomotionGoal__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LocomotionGoal__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
