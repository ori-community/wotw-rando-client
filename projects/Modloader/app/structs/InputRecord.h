#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InputRecord_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InputRecord_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputRecord_DEFINED)
#define IL2CPP_STRUCT_InputRecord_DEFINED
struct InputRecord {
    int16_t EventType;
    bool KeyDown;
    int16_t RepeatCount;
    int16_t VirtualKeyCode;
    int16_t VirtualScanCode;
    uint16_t Character;
    int32_t ControlKeyState;
    int32_t pad1;
    bool pad2;
};
#endif
#if !defined(IL2CPP_STRUCT_InputRecord_FWDDECL)
#define IL2CPP_STRUCT_InputRecord_FWDDECL
#endif
#undef IL2CPP_STRUCT_InputRecord_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputRecord_DEFINED) && !defined(IL2CPP_STRUCT_InputRecord_FWDDECL)
#include <Modloader/app/structs/InputRecord.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InputRecord.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
