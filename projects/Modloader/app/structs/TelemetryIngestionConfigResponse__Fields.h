#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TelemetryIngestionConfigResponse__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TelemetryIngestionConfigResponse__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TelemetryIngestionConfigResponse__Fields_DEFINED)
#include <Modloader/app/structs/PlayFabResultCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabResultCommon__Fields_DEFINED)
#define IL2CPP_STRUCT_TelemetryIngestionConfigResponse__Fields_DEFINED
struct String;
struct TelemetryIngestionConfigResponse__Fields {
    struct PlayFabResultCommon__Fields _;
    struct String* IngestionKey;
    struct String* TelemetryJwtHeaderKey;
    struct String* TelemetryJwtHeaderPrefix;
    struct String* TelemetryJwtToken;
    struct String* TenantId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TelemetryIngestionConfigResponse__Fields_FWDDECL)
#define IL2CPP_STRUCT_TelemetryIngestionConfigResponse__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_TelemetryIngestionConfigResponse__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TelemetryIngestionConfigResponse__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TelemetryIngestionConfigResponse__Fields_FWDDECL)
#include <Modloader/app/structs/TelemetryIngestionConfigResponse__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TelemetryIngestionConfigResponse__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
