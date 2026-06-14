#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventType__Enum_DEFINED)
#define IL2CPP_STRUCT_EventType__Enum_DEFINED
enum class EventType__Enum : int32_t {
    MouseDown = 0x00000000,
    MouseUp = 0x00000001,
    MouseMove = 0x00000002,
    MouseDrag = 0x00000003,
    KeyDown = 0x00000004,
    KeyUp = 0x00000005,
    ScrollWheel = 0x00000006,
    Repaint = 0x00000007,
    Layout = 0x00000008,
    DragUpdated = 0x00000009,
    DragPerform = 0x0000000a,
    DragExited = 0x0000000f,
    Ignore = 0x0000000b,
    Used = 0x0000000c,
    ValidateCommand = 0x0000000d,
    ExecuteCommand = 0x0000000e,
    ContextClick = 0x00000010,
    MouseEnterWindow = 0x00000014,
    MouseLeaveWindow = 0x00000015,
    mouseDown = 0x00000000,
    mouseUp = 0x00000001,
    mouseMove = 0x00000002,
    mouseDrag = 0x00000003,
    keyDown = 0x00000004,
    keyUp = 0x00000005,
    scrollWheel = 0x00000006,
    repaint = 0x00000007,
    layout = 0x00000008,
    dragUpdated = 0x00000009,
    dragPerform = 0x0000000a,
    ignore = 0x0000000b,
    used = 0x0000000c,
};
#endif
#if !defined(IL2CPP_STRUCT_EventType__Enum_FWDDECL)
#define IL2CPP_STRUCT_EventType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EventType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EventType__Enum_FWDDECL)
#include <Modloader/app/structs/EventType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
