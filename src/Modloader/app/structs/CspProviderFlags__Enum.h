#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CspProviderFlags__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CspProviderFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_CspProviderFlags__Enum_DEFINED)
#define IL2CPP_STRUCT_CspProviderFlags__Enum_DEFINED
enum class CspProviderFlags__Enum : int32_t {
    NoFlags = 0x00000000,
    UseMachineKeyStore = 0x00000001,
    UseDefaultKeyContainer = 0x00000002,
    UseNonExportableKey = 0x00000004,
    UseExistingKey = 0x00000008,
    UseArchivableKey = 0x00000010,
    UseUserProtectedKey = 0x00000020,
    NoPrompt = 0x00000040,
    CreateEphemeralKey = 0x00000080,
};
#endif
#if !defined(IL2CPP_STRUCT_CspProviderFlags__Enum_FWDDECL)
#define IL2CPP_STRUCT_CspProviderFlags__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_CspProviderFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_CspProviderFlags__Enum_DEFINED) && !defined(IL2CPP_STRUCT_CspProviderFlags__Enum_FWDDECL)
#include <Modloader/app/structs/CspProviderFlags__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CspProviderFlags__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
