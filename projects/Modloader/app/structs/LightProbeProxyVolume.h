#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightProbeProxyVolume_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightProbeProxyVolume_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightProbeProxyVolume_DEFINED)
#include <Modloader/app/structs/LightProbeProxyVolume__Fields.h>
#if defined(IL2CPP_STRUCT_LightProbeProxyVolume__Fields_DEFINED)
#define IL2CPP_STRUCT_LightProbeProxyVolume_DEFINED
struct LightProbeProxyVolume__Class;
struct LightProbeProxyVolume {
    struct LightProbeProxyVolume__Class* klass;
    MonitorData* monitor;
    struct LightProbeProxyVolume__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LightProbeProxyVolume_FWDDECL)
#define IL2CPP_STRUCT_LightProbeProxyVolume_FWDDECL
#include <Modloader/app/structs/LightProbeProxyVolume__Class.h>
#endif
#undef IL2CPP_STRUCT_LightProbeProxyVolume_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightProbeProxyVolume_DEFINED) && !defined(IL2CPP_STRUCT_LightProbeProxyVolume_FWDDECL)
#include <Modloader/app/structs/LightProbeProxyVolume.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightProbeProxyVolume.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
