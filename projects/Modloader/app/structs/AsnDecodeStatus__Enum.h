#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AsnDecodeStatus__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AsnDecodeStatus__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsnDecodeStatus__Enum_DEFINED)
#define IL2CPP_STRUCT_AsnDecodeStatus__Enum_DEFINED
enum class AsnDecodeStatus__Enum : int32_t {
    NotDecoded = -1,
    Ok = 0x00000000,
    BadAsn = 0x00000001,
    BadTag = 0x00000002,
    BadLength = 0x00000003,
    InformationNotAvailable = 0x00000004,
};
#endif
#if !defined(IL2CPP_STRUCT_AsnDecodeStatus__Enum_FWDDECL)
#define IL2CPP_STRUCT_AsnDecodeStatus__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_AsnDecodeStatus__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsnDecodeStatus__Enum_DEFINED) && !defined(IL2CPP_STRUCT_AsnDecodeStatus__Enum_FWDDECL)
#include <Modloader/app/structs/AsnDecodeStatus__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AsnDecodeStatus__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
