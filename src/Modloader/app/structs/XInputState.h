#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XInputState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XInputState_INITIALIZING
#if !defined(IL2CPP_STRUCT_XInputState_DEFINED)
#include <Modloader/app/structs/XInputGamepad.h>
#if defined(IL2CPP_STRUCT_XInputGamepad_DEFINED)
#define IL2CPP_STRUCT_XInputState_DEFINED
struct XInputState {
    int32_t PacketNumber;
    struct XInputGamepad Gamepad;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XInputState_FWDDECL)
#define IL2CPP_STRUCT_XInputState_FWDDECL
#endif
#undef IL2CPP_STRUCT_XInputState_INITIALIZING
#if !defined(IL2CPP_STRUCT_XInputState_DEFINED) && !defined(IL2CPP_STRUCT_XInputState_FWDDECL)
#include <Modloader/app/structs/XInputState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XInputState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
