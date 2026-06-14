#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerDeviceInfoEventData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerDeviceInfoEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerDeviceInfoEventData__Fields_DEFINED)
#include <Modloader/app/structs/PlayStreamEventBase__Fields.h>
#if defined(IL2CPP_STRUCT_PlayStreamEventBase__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerDeviceInfoEventData__Fields_DEFINED
struct Dictionary_2_System_String_System_Object_;
struct String;
struct PlayerDeviceInfoEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct Dictionary_2_System_String_System_Object_* DeviceInfo;
    struct String* TitleId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerDeviceInfoEventData__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayerDeviceInfoEventData__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_System_Object_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_PlayerDeviceInfoEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerDeviceInfoEventData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayerDeviceInfoEventData__Fields_FWDDECL)
#include <Modloader/app/structs/PlayerDeviceInfoEventData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerDeviceInfoEventData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
