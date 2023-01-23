#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameController__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameController__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameController__StaticFields_DEFINED)
#include <Modloader/app/structs/GameController_ProfilingConfiguration__Enum.h>
#if defined(IL2CPP_STRUCT_GameController_ProfilingConfiguration__Enum_DEFINED)
#define IL2CPP_STRUCT_GameController__StaticFields_DEFINED
struct GameController;
struct String;
struct GameParameters;
struct GameController__StaticFields {
    struct GameController* Instance;
    bool IsContentPackage;
    bool IsDoingAnyAutomation;
    bool FreezeFixedUpdate;
    bool IsClosing;
    bool IsFocused;
    int32_t XboxHardwareVersion;
    bool HFRSupported;
    bool m_isPackageFullyInstalled;
    struct String* DeviceUniqueIdentifier;
    struct String* UserLocale;
    int64_t UserGeoIDRegion;
    int64_t UserGeoIDNation;
    bool IsChinaRegion;
    struct GameParameters* _Parameters_k__BackingField;
    GameController_ProfilingConfiguration__Enum ProfilingConfig;

    int32_t m_totalExceptionCount;
    int32_t m_recentExceptionCount;
    bool m_showDebug;
    bool ShowTelemetryDebug;
    bool ShowCleanupDebug;
    bool ShowBackupSaveDebug;
    bool ShowGeneralDataDebug;
    bool ShouldUseLessEvents;
    struct String* XBOX_USE_LESS_EVENTS_FUNCTION_NAME;
    struct String* WIN10_USE_LESS_EVENTS_FUNCTION_NAME;
    struct String* PC_USE_LESS_EVENTS_FUNCTION_NAME;
    struct String* SWITCH_USE_LESS_EVENTS_FUNCTION_NAME;
    struct String* XBOX_ALLOW_TELEMETRY_FUNCTION_NAME;
    struct String* WIN10_ALLOW_TELEMETRY_FUNCTION_NAME;
    struct String* PC_ALLOW_TELEMETRY_FUNCTION_NAME;
    struct String* SWITCH_ALLOW_TELEMETRY_FUNCTION_NAME;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameController__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_GameController__StaticFields_FWDDECL
#include <Modloader/app/structs/GameController.h>
#include <Modloader/app/structs/GameParameters.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_GameController__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameController__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_GameController__StaticFields_FWDDECL)
#include <Modloader/app/structs/GameController__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameController__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
