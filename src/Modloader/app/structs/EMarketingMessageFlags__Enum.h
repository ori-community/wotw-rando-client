#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EMarketingMessageFlags__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EMarketingMessageFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EMarketingMessageFlags__Enum_DEFINED)
#define IL2CPP_STRUCT_EMarketingMessageFlags__Enum_DEFINED
enum class EMarketingMessageFlags__Enum : int32_t {
    k_EMarketingMessageFlagsNone = 0x00000000,
    k_EMarketingMessageFlagsHighPriority = 0x00000001,
    k_EMarketingMessageFlagsPlatformWindows = 0x00000002,
    k_EMarketingMessageFlagsPlatformMac = 0x00000004,
    k_EMarketingMessageFlagsPlatformLinux = 0x00000008,
    k_EMarketingMessageFlagsPlatformRestrictions = 0x0000000e,
};
#endif
#if !defined(IL2CPP_STRUCT_EMarketingMessageFlags__Enum_FWDDECL)
#define IL2CPP_STRUCT_EMarketingMessageFlags__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EMarketingMessageFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EMarketingMessageFlags__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EMarketingMessageFlags__Enum_FWDDECL)
#include <Modloader/app/structs/EMarketingMessageFlags__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EMarketingMessageFlags__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
