#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ZeroEnergySample_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ZeroEnergySample_INITIALIZING
#if !defined(IL2CPP_STRUCT_ZeroEnergySample_DEFINED)
#include <Modloader/app/structs/ZeroEnergySample__Fields.h>
#if defined(IL2CPP_STRUCT_ZeroEnergySample__Fields_DEFINED)
#define IL2CPP_STRUCT_ZeroEnergySample_DEFINED
struct ZeroEnergySample__Class;
struct ZeroEnergySample {
    struct ZeroEnergySample__Class* klass;
    MonitorData* monitor;
    struct ZeroEnergySample__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ZeroEnergySample_FWDDECL)
#define IL2CPP_STRUCT_ZeroEnergySample_FWDDECL
#include <Modloader/app/structs/ZeroEnergySample__Class.h>
#endif
#undef IL2CPP_STRUCT_ZeroEnergySample_INITIALIZING
#if !defined(IL2CPP_STRUCT_ZeroEnergySample_DEFINED) && !defined(IL2CPP_STRUCT_ZeroEnergySample_FWDDECL)
#include <Modloader/app/structs/ZeroEnergySample.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ZeroEnergySample.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
