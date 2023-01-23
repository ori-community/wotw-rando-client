#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AttributeProperties__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AttributeProperties__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttributeProperties__Enum_DEFINED)
#define IL2CPP_STRUCT_AttributeProperties__Enum_DEFINED
enum class AttributeProperties__Enum : uint32_t {
    DEFAULT = 0x00000000,
    URI = 0x00000001,
    BOOLEAN = 0x00000002,
    NAME = 0x00000004,
};
#endif
#if !defined(IL2CPP_STRUCT_AttributeProperties__Enum_FWDDECL)
#define IL2CPP_STRUCT_AttributeProperties__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_AttributeProperties__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttributeProperties__Enum_DEFINED) && !defined(IL2CPP_STRUCT_AttributeProperties__Enum_FWDDECL)
#include <Modloader/app/structs/AttributeProperties__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AttributeProperties__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
