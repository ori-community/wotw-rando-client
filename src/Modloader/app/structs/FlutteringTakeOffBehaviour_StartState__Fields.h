#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FlutteringTakeOffBehaviour_StartState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FlutteringTakeOffBehaviour_StartState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FlutteringTakeOffBehaviour_StartState__Fields_DEFINED)
#include <Modloader/app/structs/FlutteringTakeOffBehaviour_FlutterTakeOffState__Fields.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_FlutteringTakeOffBehaviour_FlutterTakeOffState__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_FlutteringTakeOffBehaviour_StartState__Fields_DEFINED
struct AirEntityMovementProcessor;
struct FlutteringTakeOffBehaviour_StartState__Fields {
    struct FlutteringTakeOffBehaviour_FlutterTakeOffState__Fields _;
    struct Vector3 m_desiredPoint;
    struct AirEntityMovementProcessor* m_airMovement;
    struct Quaternion m_initialRotation;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FlutteringTakeOffBehaviour_StartState__Fields_FWDDECL)
#define IL2CPP_STRUCT_FlutteringTakeOffBehaviour_StartState__Fields_FWDDECL
#include <Modloader/app/structs/AirEntityMovementProcessor.h>
#endif
#undef IL2CPP_STRUCT_FlutteringTakeOffBehaviour_StartState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FlutteringTakeOffBehaviour_StartState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FlutteringTakeOffBehaviour_StartState__Fields_FWDDECL)
#include <Modloader/app/structs/FlutteringTakeOffBehaviour_StartState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FlutteringTakeOffBehaviour_StartState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
