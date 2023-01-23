#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimesliceSpikeReporter__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimesliceSpikeReporter__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimesliceSpikeReporter__StaticFields_DEFINED)
#define IL2CPP_STRUCT_TimesliceSpikeReporter__StaticFields_DEFINED
struct TimesliceSpikeReporter;
struct TimesliceSpikeReporter__StaticFields {
    float SpikeThreshold;
    bool ActivationTasksOnly;
    struct TimesliceSpikeReporter* m_instance;
};
#endif
#if !defined(IL2CPP_STRUCT_TimesliceSpikeReporter__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_TimesliceSpikeReporter__StaticFields_FWDDECL
#include <Modloader/app/structs/TimesliceSpikeReporter.h>
#endif
#undef IL2CPP_STRUCT_TimesliceSpikeReporter__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimesliceSpikeReporter__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_TimesliceSpikeReporter__StaticFields_FWDDECL)
#include <Modloader/app/structs/TimesliceSpikeReporter__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimesliceSpikeReporter__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
