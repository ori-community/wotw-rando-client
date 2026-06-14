#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ERegisterActivationCodeResult__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ERegisterActivationCodeResult__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ERegisterActivationCodeResult__Enum_DEFINED)
#define IL2CPP_STRUCT_ERegisterActivationCodeResult__Enum_DEFINED
enum class ERegisterActivationCodeResult__Enum : int32_t {
    k_ERegisterActivationCodeResultOK = 0x00000000,
    k_ERegisterActivationCodeResultFail = 0x00000001,
    k_ERegisterActivationCodeResultAlreadyRegistered = 0x00000002,
    k_ERegisterActivationCodeResultTimeout = 0x00000003,
    k_ERegisterActivationCodeAlreadyOwned = 0x00000004,
};
#endif
#if !defined(IL2CPP_STRUCT_ERegisterActivationCodeResult__Enum_FWDDECL)
#define IL2CPP_STRUCT_ERegisterActivationCodeResult__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ERegisterActivationCodeResult__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ERegisterActivationCodeResult__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ERegisterActivationCodeResult__Enum_FWDDECL)
#include <Modloader/app/structs/ERegisterActivationCodeResult__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ERegisterActivationCodeResult__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
