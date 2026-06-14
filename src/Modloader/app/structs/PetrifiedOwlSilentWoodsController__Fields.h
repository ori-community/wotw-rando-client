#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PetrifiedOwlSilentWoodsController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PetrifiedOwlSilentWoodsController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlSilentWoodsController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_PetrifiedOwlSilentWoodsController__Fields_DEFINED
struct SerializedBooleanUberState;
struct GameObject;
struct MoonTimeline;
struct Condition_1;
struct PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerStates;
struct StateMachine_2;
struct PetrifiedOwlSilentWoodsController__Fields {
    struct MonoBehaviour__Fields _;
    struct SerializedBooleanUberState* State;
    struct GameObject* PowlRig;
    struct GameObject* SkeetoRig;
    struct MoonTimeline* StalkALoop;
    struct MoonTimeline* StalkAToB;
    struct MoonTimeline* StalkBLoop;
    struct MoonTimeline* StalkBExit;
    struct MoonTimeline* StalkC;
    struct Condition_1* AToBCondition;
    struct Condition_1* BExitCondition;
    struct Condition_1* CEnterCondition;
    struct PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerStates* States;
    struct StateMachine_2* m_stateMachine;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PetrifiedOwlSilentWoodsController__Fields_FWDDECL)
#define IL2CPP_STRUCT_PetrifiedOwlSilentWoodsController__Fields_FWDDECL
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PetrifiedOwlSilentWoodsController_PetrifiedOwlSilentWoodsControllerStates.h>
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#include <Modloader/app/structs/StateMachine_2.h>
#endif
#undef IL2CPP_STRUCT_PetrifiedOwlSilentWoodsController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlSilentWoodsController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PetrifiedOwlSilentWoodsController__Fields_FWDDECL)
#include <Modloader/app/structs/PetrifiedOwlSilentWoodsController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PetrifiedOwlSilentWoodsController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
