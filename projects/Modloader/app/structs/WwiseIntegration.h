#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WwiseIntegration_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WwiseIntegration_INITIALIZING
#if !defined(IL2CPP_STRUCT_WwiseIntegration_DEFINED)
#include <Modloader/app/structs/WwiseIntegration__Fields.h>
#if defined(IL2CPP_STRUCT_WwiseIntegration__Fields_DEFINED)
#define IL2CPP_STRUCT_WwiseIntegration_DEFINED
struct WwiseIntegration__Class;
struct WwiseIntegration {
    struct WwiseIntegration__Class* klass;
    MonitorData* monitor;
    struct WwiseIntegration__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WwiseIntegration_FWDDECL)
#define IL2CPP_STRUCT_WwiseIntegration_FWDDECL
#include <Modloader/app/structs/WwiseIntegration__Class.h>
#endif
#undef IL2CPP_STRUCT_WwiseIntegration_INITIALIZING
#if !defined(IL2CPP_STRUCT_WwiseIntegration_DEFINED) && !defined(IL2CPP_STRUCT_WwiseIntegration_FWDDECL)
#include <Modloader/app/structs/WwiseIntegration.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WwiseIntegration.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
