#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightProbeUsage__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightProbeUsage__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightProbeUsage__Enum_DEFINED)
#define IL2CPP_STRUCT_LightProbeUsage__Enum_DEFINED
enum class LightProbeUsage__Enum : int32_t {
    Off = 0x00000000,
    BlendProbes = 0x00000001,
    UseProxyVolume = 0x00000002,
    CustomProvided = 0x00000004,
};
#endif
#if !defined(IL2CPP_STRUCT_LightProbeUsage__Enum_FWDDECL)
#define IL2CPP_STRUCT_LightProbeUsage__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_LightProbeUsage__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightProbeUsage__Enum_DEFINED) && !defined(IL2CPP_STRUCT_LightProbeUsage__Enum_FWDDECL)
#include <Modloader/app/structs/LightProbeUsage__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightProbeUsage__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
