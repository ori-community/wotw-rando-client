#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XInputVibration_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XInputVibration_INITIALIZING
#if !defined(IL2CPP_STRUCT_XInputVibration_DEFINED)
#define IL2CPP_STRUCT_XInputVibration_DEFINED
struct XInputVibration {
    uint16_t LeftMotorSpeed;
    uint16_t RightMotorSpeed;
};
#endif
#if !defined(IL2CPP_STRUCT_XInputVibration_FWDDECL)
#define IL2CPP_STRUCT_XInputVibration_FWDDECL
#endif
#undef IL2CPP_STRUCT_XInputVibration_INITIALIZING
#if !defined(IL2CPP_STRUCT_XInputVibration_DEFINED) && !defined(IL2CPP_STRUCT_XInputVibration_FWDDECL)
#include <Modloader/app/structs/XInputVibration.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XInputVibration.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
