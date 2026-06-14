#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlReadMode__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlReadMode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlReadMode__Enum_DEFINED)
#define IL2CPP_STRUCT_XmlReadMode__Enum_DEFINED
enum class XmlReadMode__Enum : int32_t {
    Auto = 0x00000000,
    ReadSchema = 0x00000001,
    IgnoreSchema = 0x00000002,
    InferSchema = 0x00000003,
    DiffGram = 0x00000004,
    Fragment = 0x00000005,
    InferTypedSchema = 0x00000006,
};
#endif
#if !defined(IL2CPP_STRUCT_XmlReadMode__Enum_FWDDECL)
#define IL2CPP_STRUCT_XmlReadMode__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_XmlReadMode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlReadMode__Enum_DEFINED) && !defined(IL2CPP_STRUCT_XmlReadMode__Enum_FWDDECL)
#include <Modloader/app/structs/XmlReadMode__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlReadMode__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
