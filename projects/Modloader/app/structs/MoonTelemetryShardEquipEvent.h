#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTelemetryShardEquipEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTelemetryShardEquipEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryShardEquipEvent_DEFINED)
#include <Modloader/app/structs/MoonTelemetryShardEquipEvent__Fields.h>
#if defined(IL2CPP_STRUCT_MoonTelemetryShardEquipEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonTelemetryShardEquipEvent_DEFINED
struct MoonTelemetryShardEquipEvent__Class;
struct MoonTelemetryShardEquipEvent {
    struct MoonTelemetryShardEquipEvent__Class* klass;
    MonitorData* monitor;
    struct MoonTelemetryShardEquipEvent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonTelemetryShardEquipEvent_FWDDECL)
#define IL2CPP_STRUCT_MoonTelemetryShardEquipEvent_FWDDECL
#include <Modloader/app/structs/MoonTelemetryShardEquipEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonTelemetryShardEquipEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTelemetryShardEquipEvent_DEFINED) && !defined(IL2CPP_STRUCT_MoonTelemetryShardEquipEvent_FWDDECL)
#include <Modloader/app/structs/MoonTelemetryShardEquipEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTelemetryShardEquipEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
