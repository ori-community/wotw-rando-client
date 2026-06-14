#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EVRNotificationStyle__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EVRNotificationStyle__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EVRNotificationStyle__Enum_DEFINED)
#define IL2CPP_STRUCT_EVRNotificationStyle__Enum_DEFINED
enum class EVRNotificationStyle__Enum : int32_t {
    None = 0x00000000,
    Application = 0x00000064,
    Contact_Disabled = 0x000000c8,
    Contact_Enabled = 0x000000c9,
    Contact_Active = 0x000000ca,
};
#endif
#if !defined(IL2CPP_STRUCT_EVRNotificationStyle__Enum_FWDDECL)
#define IL2CPP_STRUCT_EVRNotificationStyle__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EVRNotificationStyle__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EVRNotificationStyle__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EVRNotificationStyle__Enum_FWDDECL)
#include <Modloader/app/structs/EVRNotificationStyle__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EVRNotificationStyle__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
