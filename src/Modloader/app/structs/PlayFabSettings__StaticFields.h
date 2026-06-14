#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabSettings__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabSettings__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabSettings__StaticFields_DEFINED)
#define IL2CPP_STRUCT_PlayFabSettings__StaticFields_DEFINED
struct String;
struct PlayFabSharedSettings;
struct Dictionary_2_System_String_System_String_;
struct PlayFabSettings__StaticFields {
    struct String* AdvertisingIdType;
    struct String* AdvertisingIdValue;
    bool DisableAdvertising;
    bool DisableDeviceInfo;
    bool DisableFocusTimeCollection;
    struct PlayFabSharedSettings* _playFabShared;
    struct Dictionary_2_System_String_System_String_* RequestGetParams;
    struct String* _localApiServer;
};
#endif
#if !defined(IL2CPP_STRUCT_PlayFabSettings__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_PlayFabSettings__StaticFields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/PlayFabSharedSettings.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_PlayFabSettings__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabSettings__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabSettings__StaticFields_FWDDECL)
#include <Modloader/app/structs/PlayFabSettings__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabSettings__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
