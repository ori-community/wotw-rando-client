#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OneEnergySample_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OneEnergySample_INITIALIZING
#if !defined(IL2CPP_STRUCT_OneEnergySample_DEFINED)
#include <Modloader/app/structs/OneEnergySample__Fields.h>
#if defined(IL2CPP_STRUCT_OneEnergySample__Fields_DEFINED)
#define IL2CPP_STRUCT_OneEnergySample_DEFINED
struct OneEnergySample__Class;
struct OneEnergySample {
    struct OneEnergySample__Class* klass;
    MonitorData* monitor;
    struct OneEnergySample__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OneEnergySample_FWDDECL)
#define IL2CPP_STRUCT_OneEnergySample_FWDDECL
#include <Modloader/app/structs/OneEnergySample__Class.h>
#endif
#undef IL2CPP_STRUCT_OneEnergySample_INITIALIZING
#if !defined(IL2CPP_STRUCT_OneEnergySample_DEFINED) && !defined(IL2CPP_STRUCT_OneEnergySample_FWDDECL)
#include <Modloader/app/structs/OneEnergySample.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OneEnergySample.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
