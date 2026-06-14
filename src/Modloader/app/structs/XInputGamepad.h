#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XInputGamepad_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XInputGamepad_INITIALIZING
#if !defined(IL2CPP_STRUCT_XInputGamepad_DEFINED)
#define IL2CPP_STRUCT_XInputGamepad_DEFINED
struct XInputGamepad {
    int16_t wButtons;
    uint8_t bLeftTrigger;
    uint8_t bRightTrigger;
    int16_t sThumbLX;
    int16_t sThumbLY;
    int16_t sThumbRX;
    int16_t sThumbRY;
};
#endif
#if !defined(IL2CPP_STRUCT_XInputGamepad_FWDDECL)
#define IL2CPP_STRUCT_XInputGamepad_FWDDECL
#endif
#undef IL2CPP_STRUCT_XInputGamepad_INITIALIZING
#if !defined(IL2CPP_STRUCT_XInputGamepad_DEFINED) && !defined(IL2CPP_STRUCT_XInputGamepad_FWDDECL)
#include <Modloader/app/structs/XInputGamepad.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XInputGamepad.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
