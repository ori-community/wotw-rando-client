#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EAccountType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EAccountType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EAccountType__Enum_DEFINED)
#define IL2CPP_STRUCT_EAccountType__Enum_DEFINED
enum class EAccountType__Enum : int32_t {
    k_EAccountTypeInvalid = 0x00000000,
    k_EAccountTypeIndividual = 0x00000001,
    k_EAccountTypeMultiseat = 0x00000002,
    k_EAccountTypeGameServer = 0x00000003,
    k_EAccountTypeAnonGameServer = 0x00000004,
    k_EAccountTypePending = 0x00000005,
    k_EAccountTypeContentServer = 0x00000006,
    k_EAccountTypeClan = 0x00000007,
    k_EAccountTypeChat = 0x00000008,
    k_EAccountTypeConsoleUser = 0x00000009,
    k_EAccountTypeAnonUser = 0x0000000a,
    k_EAccountTypeMax = 0x0000000b,
};
#endif
#if !defined(IL2CPP_STRUCT_EAccountType__Enum_FWDDECL)
#define IL2CPP_STRUCT_EAccountType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EAccountType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EAccountType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EAccountType__Enum_FWDDECL)
#include <Modloader/app/structs/EAccountType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EAccountType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
