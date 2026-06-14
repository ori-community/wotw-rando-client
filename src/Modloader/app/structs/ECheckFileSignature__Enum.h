#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ECheckFileSignature__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ECheckFileSignature__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ECheckFileSignature__Enum_DEFINED)
#define IL2CPP_STRUCT_ECheckFileSignature__Enum_DEFINED
enum class ECheckFileSignature__Enum : int32_t {
    k_ECheckFileSignatureInvalidSignature = 0x00000000,
    k_ECheckFileSignatureValidSignature = 0x00000001,
    k_ECheckFileSignatureFileNotFound = 0x00000002,
    k_ECheckFileSignatureNoSignaturesFoundForThisApp = 0x00000003,
    k_ECheckFileSignatureNoSignaturesFoundForThisFile = 0x00000004,
};
#endif
#if !defined(IL2CPP_STRUCT_ECheckFileSignature__Enum_FWDDECL)
#define IL2CPP_STRUCT_ECheckFileSignature__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ECheckFileSignature__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ECheckFileSignature__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ECheckFileSignature__Enum_FWDDECL)
#include <Modloader/app/structs/ECheckFileSignature__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ECheckFileSignature__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
