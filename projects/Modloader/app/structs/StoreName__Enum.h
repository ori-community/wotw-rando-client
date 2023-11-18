#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StoreName__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StoreName__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_StoreName__Enum_DEFINED)
#define IL2CPP_STRUCT_StoreName__Enum_DEFINED
enum class StoreName__Enum : int32_t {
    AddressBook = 0x00000001,
    AuthRoot = 0x00000002,
    CertificateAuthority = 0x00000003,
    Disallowed = 0x00000004,
    My = 0x00000005,
    Root = 0x00000006,
    TrustedPeople = 0x00000007,
    TrustedPublisher = 0x00000008,
};
#endif
#if !defined(IL2CPP_STRUCT_StoreName__Enum_FWDDECL)
#define IL2CPP_STRUCT_StoreName__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_StoreName__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_StoreName__Enum_DEFINED) && !defined(IL2CPP_STRUCT_StoreName__Enum_FWDDECL)
#include <Modloader/app/structs/StoreName__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StoreName__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
