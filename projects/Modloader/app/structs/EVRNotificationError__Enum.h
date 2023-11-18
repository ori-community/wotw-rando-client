#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EVRNotificationError__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EVRNotificationError__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EVRNotificationError__Enum_DEFINED)
#define IL2CPP_STRUCT_EVRNotificationError__Enum_DEFINED
enum class EVRNotificationError__Enum : int32_t {
    OK = 0x00000000,
    InvalidNotificationId = 0x00000064,
    NotificationQueueFull = 0x00000065,
    InvalidOverlayHandle = 0x00000066,
    SystemWithUserValueAlreadyExists = 0x00000067,
};
#endif
#if !defined(IL2CPP_STRUCT_EVRNotificationError__Enum_FWDDECL)
#define IL2CPP_STRUCT_EVRNotificationError__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EVRNotificationError__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EVRNotificationError__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EVRNotificationError__Enum_FWDDECL)
#include <Modloader/app/structs/EVRNotificationError__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EVRNotificationError__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
