#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XboxController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XboxController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxController__Fields_DEFINED)
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/XInputState.h>
#if defined(IL2CPP_STRUCT_DateTime_DEFINED) && defined(IL2CPP_STRUCT_XInputState_DEFINED)
#define IL2CPP_STRUCT_XboxController__Fields_DEFINED
struct EventHandler_1_J2i_Net_XInputWrapper_XboxControllerStateChangedEventArgs_;
struct __declspec(align(8)) XboxController__Fields {
    int32_t _playerIndex;
    bool _stopMotorTimerActive;
    struct DateTime _stopMotorTime;
    struct XInputState gamepadStatePrev;
    struct XInputState gamepadStateCurrent;
    struct EventHandler_1_J2i_Net_XInputWrapper_XboxControllerStateChangedEventArgs_* StateChanged;
    bool _isConnected;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XboxController__Fields_FWDDECL)
#define IL2CPP_STRUCT_XboxController__Fields_FWDDECL
#include <Modloader/app/structs/EventHandler_1_J2i_Net_XInputWrapper_XboxControllerStateChangedEventArgs_.h>
#endif
#undef IL2CPP_STRUCT_XboxController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XboxController__Fields_FWDDECL)
#include <Modloader/app/structs/XboxController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XboxController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
