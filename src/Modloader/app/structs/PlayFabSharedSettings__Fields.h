#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabSharedSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabSharedSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabSharedSettings__Fields_DEFINED)
#include <Modloader/app/structs/PlayFabLogLevel__Enum.h>
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#include <Modloader/app/structs/WebRequestType__Enum.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED) && defined(IL2CPP_STRUCT_WebRequestType__Enum_DEFINED) && defined(IL2CPP_STRUCT_PlayFabLogLevel__Enum_DEFINED)
#define IL2CPP_STRUCT_PlayFabSharedSettings__Fields_DEFINED
struct String;
struct PlayFabSharedSettings__Fields {
    struct ScriptableObject__Fields _;
    struct String* TitleId;
    struct String* VerticalName;
    struct String* DeveloperSecretKey;
    struct String* ProductionEnvironmentUrl;
    WebRequestType__Enum RequestType;

    int32_t RequestTimeout;
    bool RequestKeepAlive;
    bool CompressApiData;
    PlayFabLogLevel__Enum LogLevel;

    struct String* LoggerHost;
    int32_t LoggerPort;
    bool EnableRealTimeLogging;
    int32_t LogCapLimit;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayFabSharedSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayFabSharedSettings__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_PlayFabSharedSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabSharedSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabSharedSettings__Fields_FWDDECL)
#include <Modloader/app/structs/PlayFabSharedSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabSharedSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
