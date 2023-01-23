#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkPluginType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkPluginType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkPluginType__Enum_DEFINED)
#define IL2CPP_STRUCT_AkPluginType__Enum_DEFINED
enum class AkPluginType__Enum : int32_t {
    AkPluginTypeNone = 0x00000000,
    AkPluginTypeCodec = 0x00000001,
    AkPluginTypeSource = 0x00000002,
    AkPluginTypeEffect = 0x00000003,
    AkPluginTypeMixer = 0x00000006,
    AkPluginTypeSink = 0x00000007,
    AkPluginTypeGlobalExtension = 0x00000008,
    AkPluginTypeMask = 0x0000000f,
};
#endif
#if !defined(IL2CPP_STRUCT_AkPluginType__Enum_FWDDECL)
#define IL2CPP_STRUCT_AkPluginType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_AkPluginType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkPluginType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_AkPluginType__Enum_FWDDECL)
#include <Modloader/app/structs/AkPluginType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkPluginType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
