#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ITelemetrySerializable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ITelemetrySerializable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITelemetrySerializable_DEFINED)
#define IL2CPP_STRUCT_ITelemetrySerializable_DEFINED
struct ITelemetrySerializable__Class;
struct ITelemetrySerializable {
    struct ITelemetrySerializable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ITelemetrySerializable_FWDDECL)
#define IL2CPP_STRUCT_ITelemetrySerializable_FWDDECL
#include <Modloader/app/structs/ITelemetrySerializable__Class.h>
#endif
#undef IL2CPP_STRUCT_ITelemetrySerializable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITelemetrySerializable_DEFINED) && !defined(IL2CPP_STRUCT_ITelemetrySerializable_FWDDECL)
#include <Modloader/app/structs/ITelemetrySerializable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ITelemetrySerializable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
