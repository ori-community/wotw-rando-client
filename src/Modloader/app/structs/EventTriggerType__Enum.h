#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventTriggerType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventTriggerType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventTriggerType__Enum_DEFINED)
#define IL2CPP_STRUCT_EventTriggerType__Enum_DEFINED
enum class EventTriggerType__Enum : int32_t {
    PointerEnter = 0x00000000,
    PointerExit = 0x00000001,
    PointerDown = 0x00000002,
    PointerUp = 0x00000003,
    PointerClick = 0x00000004,
    Drag = 0x00000005,
    Drop = 0x00000006,
    Scroll = 0x00000007,
    UpdateSelected = 0x00000008,
    Select = 0x00000009,
    Deselect = 0x0000000a,
    Move = 0x0000000b,
    InitializePotentialDrag = 0x0000000c,
    BeginDrag = 0x0000000d,
    EndDrag = 0x0000000e,
    Submit = 0x0000000f,
    Cancel = 0x00000010,
};
#endif
#if !defined(IL2CPP_STRUCT_EventTriggerType__Enum_FWDDECL)
#define IL2CPP_STRUCT_EventTriggerType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EventTriggerType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventTriggerType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EventTriggerType__Enum_FWDDECL)
#include <Modloader/app/structs/EventTriggerType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventTriggerType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
