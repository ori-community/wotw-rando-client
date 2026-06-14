#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AdvancedPushPlatformMsg__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AdvancedPushPlatformMsg__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AdvancedPushPlatformMsg__Fields_DEFINED)
#include <Modloader/app/structs/PushNotificationPlatform__Enum_1.h>
#if defined(IL2CPP_STRUCT_PushNotificationPlatform__Enum_1_DEFINED)
#define IL2CPP_STRUCT_AdvancedPushPlatformMsg__Fields_DEFINED
struct String;
struct __declspec(align(8)) AdvancedPushPlatformMsg__Fields {
    struct String* Json;
    PushNotificationPlatform__Enum_1 Platform;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AdvancedPushPlatformMsg__Fields_FWDDECL)
#define IL2CPP_STRUCT_AdvancedPushPlatformMsg__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_AdvancedPushPlatformMsg__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AdvancedPushPlatformMsg__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AdvancedPushPlatformMsg__Fields_FWDDECL)
#include <Modloader/app/structs/AdvancedPushPlatformMsg__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AdvancedPushPlatformMsg__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
