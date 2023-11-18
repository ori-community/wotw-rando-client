#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayFabTelemetryProvider__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayFabTelemetryProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabTelemetryProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayFabTelemetryProvider__Fields_DEFINED
struct INetworkConnectivityChecker;
struct String;
struct __declspec(align(8)) PlayFabTelemetryProvider__Fields {
    struct INetworkConnectivityChecker* m_networkConnectivityChecker;
    struct String* m_buildNumberString;
};
#endif
#if !defined(IL2CPP_STRUCT_PlayFabTelemetryProvider__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayFabTelemetryProvider__Fields_FWDDECL
#include <Modloader/app/structs/INetworkConnectivityChecker.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_PlayFabTelemetryProvider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayFabTelemetryProvider__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayFabTelemetryProvider__Fields_FWDDECL)
#include <Modloader/app/structs/PlayFabTelemetryProvider__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayFabTelemetryProvider__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
