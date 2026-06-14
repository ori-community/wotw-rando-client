#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GasballLocomotion__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GasballLocomotion__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GasballLocomotion__Fields_DEFINED)
#include <Modloader/app/structs/AirEntityLocomotion__Fields.h>
#if defined(IL2CPP_STRUCT_AirEntityLocomotion__Fields_DEFINED)
#define IL2CPP_STRUCT_GasballLocomotion__Fields_DEFINED
struct GasballAirMoveTimelineBehaviour;
struct GasballLocomotion__Fields {
    struct AirEntityLocomotion__Fields _;
    struct GasballAirMoveTimelineBehaviour* m_gasballMovementBehaviour;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GasballLocomotion__Fields_FWDDECL)
#define IL2CPP_STRUCT_GasballLocomotion__Fields_FWDDECL
#include <Modloader/app/structs/GasballAirMoveTimelineBehaviour.h>
#endif
#undef IL2CPP_STRUCT_GasballLocomotion__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GasballLocomotion__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GasballLocomotion__Fields_FWDDECL)
#include <Modloader/app/structs/GasballLocomotion__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GasballLocomotion__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
