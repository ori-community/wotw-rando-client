#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NtlmAuthLevel__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NtlmAuthLevel__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_NtlmAuthLevel__Enum_DEFINED)
#define IL2CPP_STRUCT_NtlmAuthLevel__Enum_DEFINED
enum class NtlmAuthLevel__Enum : int32_t {
    LM_and_NTLM = 0x00000000,
    LM_and_NTLM_and_try_NTLMv2_Session = 0x00000001,
    NTLM_only = 0x00000002,
    NTLMv2_only = 0x00000003,
};
#endif
#if !defined(IL2CPP_STRUCT_NtlmAuthLevel__Enum_FWDDECL)
#define IL2CPP_STRUCT_NtlmAuthLevel__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_NtlmAuthLevel__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_NtlmAuthLevel__Enum_DEFINED) && !defined(IL2CPP_STRUCT_NtlmAuthLevel__Enum_FWDDECL)
#include <Modloader/app/structs/NtlmAuthLevel__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NtlmAuthLevel__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
