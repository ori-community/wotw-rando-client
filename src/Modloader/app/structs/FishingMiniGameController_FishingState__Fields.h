#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FishingMiniGameController_FishingState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FishingMiniGameController_FishingState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FishingMiniGameController_FishingState__Fields_DEFINED)
#define IL2CPP_STRUCT_FishingMiniGameController_FishingState__Fields_DEFINED
struct FishingMiniGameController;
struct StateMachine_2;
struct FishingMiniGameController_States;
struct __declspec(align(8)) FishingMiniGameController_FishingState__Fields {
    struct FishingMiniGameController* m_fishingGame;
    struct StateMachine_2* m_stateMachine;
    struct FishingMiniGameController_States* m_states;
    float m_stateTime;
};
#endif
#if !defined(IL2CPP_STRUCT_FishingMiniGameController_FishingState__Fields_FWDDECL)
#define IL2CPP_STRUCT_FishingMiniGameController_FishingState__Fields_FWDDECL
#include <Modloader/app/structs/FishingMiniGameController.h>
#include <Modloader/app/structs/FishingMiniGameController_States.h>
#include <Modloader/app/structs/StateMachine_2.h>
#endif
#undef IL2CPP_STRUCT_FishingMiniGameController_FishingState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FishingMiniGameController_FishingState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FishingMiniGameController_FishingState__Fields_FWDDECL)
#include <Modloader/app/structs/FishingMiniGameController_FishingState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FishingMiniGameController_FishingState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
