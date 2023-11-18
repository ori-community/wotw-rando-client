#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventModifiers__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventModifiers__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventModifiers__Enum_DEFINED)
#define IL2CPP_STRUCT_EventModifiers__Enum_DEFINED
enum class EventModifiers__Enum : int32_t {
    None = 0x00000000,
    Shift = 0x00000001,
    Control = 0x00000002,
    Alt = 0x00000004,
    Command = 0x00000008,
    Numeric = 0x00000010,
    CapsLock = 0x00000020,
    FunctionKey = 0x00000040,
};
#endif
#if !defined(IL2CPP_STRUCT_EventModifiers__Enum_FWDDECL)
#define IL2CPP_STRUCT_EventModifiers__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EventModifiers__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventModifiers__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EventModifiers__Enum_FWDDECL)
#include <Modloader/app/structs/EventModifiers__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventModifiers__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
