#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EventChannel__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EventChannel__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventChannel__Enum_DEFINED)
#define IL2CPP_STRUCT_EventChannel__Enum_DEFINED
enum class EventChannel__Enum : uint8_t {
    None = 0x00,
    Admin = 0x10,
    Operational = 0x11,
    Analytic = 0x12,
    Debug = 0x13,
};
#endif
#if !defined(IL2CPP_STRUCT_EventChannel__Enum_FWDDECL)
#define IL2CPP_STRUCT_EventChannel__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EventChannel__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EventChannel__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EventChannel__Enum_FWDDECL)
#include <Modloader/app/structs/EventChannel__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EventChannel__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
