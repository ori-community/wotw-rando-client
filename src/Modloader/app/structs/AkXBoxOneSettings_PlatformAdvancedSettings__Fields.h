#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkXBoxOneSettings_PlatformAdvancedSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkXBoxOneSettings_PlatformAdvancedSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkXBoxOneSettings_PlatformAdvancedSettings__Fields_DEFINED)
#include <Modloader/app/structs/AkCommonAdvancedSettings__Fields.h>
#if defined(IL2CPP_STRUCT_AkCommonAdvancedSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_AkXBoxOneSettings_PlatformAdvancedSettings__Fields_DEFINED
struct AkXBoxOneSettings_PlatformAdvancedSettings__Fields {
    struct AkCommonAdvancedSettings__Fields _;
    uint32_t ShapeDefaultPoolSize;
    uint16_t MaximumNumberOfXMAVoices;
    bool UseHardwareCodecLowLatencyMode;
    uint32_t APUHeapCachedSize;
    uint32_t APUHeapNonCachedSize;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkXBoxOneSettings_PlatformAdvancedSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_AkXBoxOneSettings_PlatformAdvancedSettings__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_AkXBoxOneSettings_PlatformAdvancedSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkXBoxOneSettings_PlatformAdvancedSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AkXBoxOneSettings_PlatformAdvancedSettings__Fields_FWDDECL)
#include <Modloader/app/structs/AkXBoxOneSettings_PlatformAdvancedSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkXBoxOneSettings_PlatformAdvancedSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
