#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EHTTPMethod__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EHTTPMethod__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EHTTPMethod__Enum_DEFINED)
#define IL2CPP_STRUCT_EHTTPMethod__Enum_DEFINED
enum class EHTTPMethod__Enum : int32_t {
    k_EHTTPMethodInvalid = 0x00000000,
    k_EHTTPMethodGET = 0x00000001,
    k_EHTTPMethodHEAD = 0x00000002,
    k_EHTTPMethodPOST = 0x00000003,
    k_EHTTPMethodPUT = 0x00000004,
    k_EHTTPMethodDELETE = 0x00000005,
    k_EHTTPMethodOPTIONS = 0x00000006,
    k_EHTTPMethodPATCH = 0x00000007,
};
#endif
#if !defined(IL2CPP_STRUCT_EHTTPMethod__Enum_FWDDECL)
#define IL2CPP_STRUCT_EHTTPMethod__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EHTTPMethod__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EHTTPMethod__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EHTTPMethod__Enum_FWDDECL)
#include <Modloader/app/structs/EHTTPMethod__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EHTTPMethod__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
