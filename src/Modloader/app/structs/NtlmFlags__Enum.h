#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NtlmFlags__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NtlmFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_NtlmFlags__Enum_DEFINED)
#define IL2CPP_STRUCT_NtlmFlags__Enum_DEFINED
enum class NtlmFlags__Enum : int32_t {
    NegotiateUnicode = 0x00000001,
    NegotiateOem = 0x00000002,
    RequestTarget = 0x00000004,
    NegotiateNtlm = 0x00000200,
    NegotiateDomainSupplied = 0x00001000,
    NegotiateWorkstationSupplied = 0x00002000,
    NegotiateAlwaysSign = 0x00008000,
    NegotiateNtlm2Key = 0x00080000,
    Negotiate128 = 0x20000000,
    Negotiate56 = -2147483648,
};
#endif
#if !defined(IL2CPP_STRUCT_NtlmFlags__Enum_FWDDECL)
#define IL2CPP_STRUCT_NtlmFlags__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_NtlmFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_NtlmFlags__Enum_DEFINED) && !defined(IL2CPP_STRUCT_NtlmFlags__Enum_FWDDECL)
#include <Modloader/app/structs/NtlmFlags__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NtlmFlags__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
