#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WwiseBootstrapConfiguration_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WwiseBootstrapConfiguration_INITIALIZING
#if !defined(IL2CPP_STRUCT_WwiseBootstrapConfiguration_DEFINED)
#include <Modloader/app/structs/WwiseBootstrapConfiguration__Fields.h>
#if defined(IL2CPP_STRUCT_WwiseBootstrapConfiguration__Fields_DEFINED)
#define IL2CPP_STRUCT_WwiseBootstrapConfiguration_DEFINED
struct WwiseBootstrapConfiguration__Class;
struct WwiseBootstrapConfiguration {
    struct WwiseBootstrapConfiguration__Class* klass;
    MonitorData* monitor;
    struct WwiseBootstrapConfiguration__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WwiseBootstrapConfiguration_FWDDECL)
#define IL2CPP_STRUCT_WwiseBootstrapConfiguration_FWDDECL
#include <Modloader/app/structs/WwiseBootstrapConfiguration__Class.h>
#endif
#undef IL2CPP_STRUCT_WwiseBootstrapConfiguration_INITIALIZING
#if !defined(IL2CPP_STRUCT_WwiseBootstrapConfiguration_DEFINED) && !defined(IL2CPP_STRUCT_WwiseBootstrapConfiguration_FWDDECL)
#include <Modloader/app/structs/WwiseBootstrapConfiguration.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WwiseBootstrapConfiguration.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
