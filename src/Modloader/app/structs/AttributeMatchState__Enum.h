#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AttributeMatchState__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AttributeMatchState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttributeMatchState__Enum_DEFINED)
#define IL2CPP_STRUCT_AttributeMatchState__Enum_DEFINED
enum class AttributeMatchState__Enum : int32_t {
    AttributeFound = 0x00000000,
    AnyIdAttributeFound = 0x00000001,
    UndeclaredElementAndAttribute = 0x00000002,
    UndeclaredAttribute = 0x00000003,
    AnyAttributeLax = 0x00000004,
    AnyAttributeSkip = 0x00000005,
    ProhibitedAnyAttribute = 0x00000006,
    ProhibitedAttribute = 0x00000007,
    AttributeNameMismatch = 0x00000008,
    ValidateAttributeInvalidCall = 0x00000009,
};
#endif
#if !defined(IL2CPP_STRUCT_AttributeMatchState__Enum_FWDDECL)
#define IL2CPP_STRUCT_AttributeMatchState__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_AttributeMatchState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttributeMatchState__Enum_DEFINED) && !defined(IL2CPP_STRUCT_AttributeMatchState__Enum_FWDDECL)
#include <Modloader/app/structs/AttributeMatchState__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AttributeMatchState__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
