#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkCommonOutputSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkCommonOutputSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkCommonOutputSettings__Fields_DEFINED)
#include <Modloader/app/structs/AkCommonOutputSettings_PanningRule__Enum.h>
#if defined(IL2CPP_STRUCT_AkCommonOutputSettings_PanningRule__Enum_DEFINED)
#define IL2CPP_STRUCT_AkCommonOutputSettings__Fields_DEFINED
struct String;
struct AkCommonOutputSettings_ChannelConfiguration;
struct __declspec(align(8)) AkCommonOutputSettings__Fields {
    struct String* m_AudioDeviceShareset;
    uint32_t m_DeviceID;
    AkCommonOutputSettings_PanningRule__Enum m_PanningRule;

    struct AkCommonOutputSettings_ChannelConfiguration* m_ChannelConfig;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkCommonOutputSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_AkCommonOutputSettings__Fields_FWDDECL
#include <Modloader/app/structs/AkCommonOutputSettings_ChannelConfiguration.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_AkCommonOutputSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkCommonOutputSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AkCommonOutputSettings__Fields_FWDDECL)
#include <Modloader/app/structs/AkCommonOutputSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkCommonOutputSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
