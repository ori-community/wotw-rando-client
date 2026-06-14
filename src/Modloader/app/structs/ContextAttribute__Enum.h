#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ContextAttribute__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ContextAttribute__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContextAttribute__Enum_DEFINED)
#define IL2CPP_STRUCT_ContextAttribute__Enum_DEFINED
enum class ContextAttribute__Enum : int32_t {
    Sizes = 0x00000000,
    Names = 0x00000001,
    Lifespan = 0x00000002,
    DceInfo = 0x00000003,
    StreamSizes = 0x00000004,
    Authority = 0x00000006,
    PackageInfo = 0x0000000a,
    NegotiationInfo = 0x0000000c,
    UniqueBindings = 0x00000019,
    EndpointBindings = 0x0000001a,
    ClientSpecifiedSpn = 0x0000001b,
    RemoteCertificate = 0x00000053,
    LocalCertificate = 0x00000054,
    RootStore = 0x00000055,
    IssuerListInfoEx = 0x00000059,
    ConnectionInfo = 0x0000005a,
    UiInfo = 0x00000068,
};
#endif
#if !defined(IL2CPP_STRUCT_ContextAttribute__Enum_FWDDECL)
#define IL2CPP_STRUCT_ContextAttribute__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ContextAttribute__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContextAttribute__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ContextAttribute__Enum_FWDDECL)
#include <Modloader/app/structs/ContextAttribute__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ContextAttribute__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
