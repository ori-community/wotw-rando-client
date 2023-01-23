#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SecurityPermissionFlag__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SecurityPermissionFlag__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SecurityPermissionFlag__Enum_DEFINED)
#define IL2CPP_STRUCT_SecurityPermissionFlag__Enum_DEFINED
enum class SecurityPermissionFlag__Enum : int32_t {
    NoFlags = 0x00000000,
    Assertion = 0x00000001,
    UnmanagedCode = 0x00000002,
    SkipVerification = 0x00000004,
    Execution = 0x00000008,
    ControlThread = 0x00000010,
    ControlEvidence = 0x00000020,
    ControlPolicy = 0x00000040,
    SerializationFormatter = 0x00000080,
    ControlDomainPolicy = 0x00000100,
    ControlPrincipal = 0x00000200,
    ControlAppDomain = 0x00000400,
    RemotingConfiguration = 0x00000800,
    Infrastructure = 0x00001000,
    BindingRedirects = 0x00002000,
    AllFlags = 0x00003fff,
};
#endif
#if !defined(IL2CPP_STRUCT_SecurityPermissionFlag__Enum_FWDDECL)
#define IL2CPP_STRUCT_SecurityPermissionFlag__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_SecurityPermissionFlag__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SecurityPermissionFlag__Enum_DEFINED) && !defined(IL2CPP_STRUCT_SecurityPermissionFlag__Enum_FWDDECL)
#include <Modloader/app/structs/SecurityPermissionFlag__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SecurityPermissionFlag__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
