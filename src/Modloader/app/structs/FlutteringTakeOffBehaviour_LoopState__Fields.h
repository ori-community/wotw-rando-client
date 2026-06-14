#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FlutteringTakeOffBehaviour_LoopState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FlutteringTakeOffBehaviour_LoopState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FlutteringTakeOffBehaviour_LoopState__Fields_DEFINED)
#include <Modloader/app/structs/FlutteringTakeOffBehaviour_FlutterTakeOffState__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_FlutteringTakeOffBehaviour_FlutterTakeOffState__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_FlutteringTakeOffBehaviour_LoopState__Fields_DEFINED
struct CharacterPlatformMovement;
struct AirEntityMovementProcessor;
struct FlutteringTakeOffBehaviour_LoopState__Fields {
    struct FlutteringTakeOffBehaviour_FlutterTakeOffState__Fields _;
    struct Vector3 m_desiredPoint;
    struct CharacterPlatformMovement* m_platformMovement;
    struct AirEntityMovementProcessor* m_airMovement;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FlutteringTakeOffBehaviour_LoopState__Fields_FWDDECL)
#define IL2CPP_STRUCT_FlutteringTakeOffBehaviour_LoopState__Fields_FWDDECL
#include <Modloader/app/structs/AirEntityMovementProcessor.h>
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#endif
#undef IL2CPP_STRUCT_FlutteringTakeOffBehaviour_LoopState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FlutteringTakeOffBehaviour_LoopState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FlutteringTakeOffBehaviour_LoopState__Fields_FWDDECL)
#include <Modloader/app/structs/FlutteringTakeOffBehaviour_LoopState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FlutteringTakeOffBehaviour_LoopState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
