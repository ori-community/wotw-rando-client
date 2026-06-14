#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimesliceSpikeReporter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimesliceSpikeReporter_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimesliceSpikeReporter_DEFINED)
#include <Modloader/app/structs/TimesliceSpikeReporter__Fields.h>
#if defined(IL2CPP_STRUCT_TimesliceSpikeReporter__Fields_DEFINED)
#define IL2CPP_STRUCT_TimesliceSpikeReporter_DEFINED
struct TimesliceSpikeReporter__Class;
struct TimesliceSpikeReporter {
    struct TimesliceSpikeReporter__Class* klass;
    MonitorData* monitor;
    struct TimesliceSpikeReporter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimesliceSpikeReporter_FWDDECL)
#define IL2CPP_STRUCT_TimesliceSpikeReporter_FWDDECL
#include <Modloader/app/structs/TimesliceSpikeReporter__Class.h>
#endif
#undef IL2CPP_STRUCT_TimesliceSpikeReporter_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimesliceSpikeReporter_DEFINED) && !defined(IL2CPP_STRUCT_TimesliceSpikeReporter_FWDDECL)
#include <Modloader/app/structs/TimesliceSpikeReporter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimesliceSpikeReporter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
