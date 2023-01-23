#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTelemetryShardUpgradeEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTelemetryShardUpgradeEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryShardUpgradeEvent_DEFINED)
#include <Modloader/app/structs/MoonTelemetryShardUpgradeEvent__Fields.h>
#if defined(IL2CPP_STRUCT_MoonTelemetryShardUpgradeEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonTelemetryShardUpgradeEvent_DEFINED
struct MoonTelemetryShardUpgradeEvent__Class;
struct MoonTelemetryShardUpgradeEvent {
    struct MoonTelemetryShardUpgradeEvent__Class* klass;
    MonitorData* monitor;
    struct MoonTelemetryShardUpgradeEvent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonTelemetryShardUpgradeEvent_FWDDECL)
#define IL2CPP_STRUCT_MoonTelemetryShardUpgradeEvent_FWDDECL
#include <Modloader/app/structs/MoonTelemetryShardUpgradeEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonTelemetryShardUpgradeEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryShardUpgradeEvent_DEFINED) && !defined(IL2CPP_STRUCT_MoonTelemetryShardUpgradeEvent_FWDDECL)
#include <Modloader/app/structs/MoonTelemetryShardUpgradeEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTelemetryShardUpgradeEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
