#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChainPolicyType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChainPolicyType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChainPolicyType__Enum_DEFINED)
#define IL2CPP_STRUCT_ChainPolicyType__Enum_DEFINED
enum class ChainPolicyType__Enum : int32_t {
    Base = 0x00000001,
    Authenticode = 0x00000002,
    Authenticode_TS = 0x00000003,
    SSL = 0x00000004,
    BasicConstraints = 0x00000005,
    NtAuth = 0x00000006,
};
#endif
#if !defined(IL2CPP_STRUCT_ChainPolicyType__Enum_FWDDECL)
#define IL2CPP_STRUCT_ChainPolicyType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ChainPolicyType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChainPolicyType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ChainPolicyType__Enum_FWDDECL)
#include <Modloader/app/structs/ChainPolicyType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChainPolicyType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
