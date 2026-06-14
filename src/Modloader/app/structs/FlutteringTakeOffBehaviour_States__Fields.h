#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FlutteringTakeOffBehaviour_States__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FlutteringTakeOffBehaviour_States__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FlutteringTakeOffBehaviour_States__Fields_DEFINED)
#define IL2CPP_STRUCT_FlutteringTakeOffBehaviour_States__Fields_DEFINED
struct FlutteringTakeOffBehaviour_FlutterTakeOffState;
struct __declspec(align(8)) FlutteringTakeOffBehaviour_States__Fields {
    struct FlutteringTakeOffBehaviour_FlutterTakeOffState* TurnStartState;
    struct FlutteringTakeOffBehaviour_FlutterTakeOffState* StartState;
    struct FlutteringTakeOffBehaviour_FlutterTakeOffState* LoopState;
    struct FlutteringTakeOffBehaviour_FlutterTakeOffState* EndState;
};
#endif
#if !defined(IL2CPP_STRUCT_FlutteringTakeOffBehaviour_States__Fields_FWDDECL)
#define IL2CPP_STRUCT_FlutteringTakeOffBehaviour_States__Fields_FWDDECL
#include <Modloader/app/structs/FlutteringTakeOffBehaviour_FlutterTakeOffState.h>
#endif
#undef IL2CPP_STRUCT_FlutteringTakeOffBehaviour_States__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FlutteringTakeOffBehaviour_States__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FlutteringTakeOffBehaviour_States__Fields_FWDDECL)
#include <Modloader/app/structs/FlutteringTakeOffBehaviour_States__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FlutteringTakeOffBehaviour_States__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
