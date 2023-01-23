#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SecurityAction__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SecurityAction__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SecurityAction__Enum_DEFINED)
#define IL2CPP_STRUCT_SecurityAction__Enum_DEFINED
enum class SecurityAction__Enum : int32_t {
    Demand = 0x00000002,
    Assert = 0x00000003,
    Deny = 0x00000004,
    PermitOnly = 0x00000005,
    LinkDemand = 0x00000006,
    InheritanceDemand = 0x00000007,
    RequestMinimum = 0x00000008,
    RequestOptional = 0x00000009,
    RequestRefuse = 0x0000000a,
};
#endif
#if !defined(IL2CPP_STRUCT_SecurityAction__Enum_FWDDECL)
#define IL2CPP_STRUCT_SecurityAction__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_SecurityAction__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SecurityAction__Enum_DEFINED) && !defined(IL2CPP_STRUCT_SecurityAction__Enum_FWDDECL)
#include <Modloader/app/structs/SecurityAction__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SecurityAction__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
