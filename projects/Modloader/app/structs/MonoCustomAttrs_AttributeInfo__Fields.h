#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoCustomAttrs_AttributeInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoCustomAttrs_AttributeInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoCustomAttrs_AttributeInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_MonoCustomAttrs_AttributeInfo__Fields_DEFINED
struct AttributeUsageAttribute;
struct __declspec(align(8)) MonoCustomAttrs_AttributeInfo__Fields {
    struct AttributeUsageAttribute* _usage;
    int32_t _inheritanceLevel;
};
#endif
#if !defined(IL2CPP_STRUCT_MonoCustomAttrs_AttributeInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_MonoCustomAttrs_AttributeInfo__Fields_FWDDECL
#include <Modloader/app/structs/AttributeUsageAttribute.h>
#endif
#undef IL2CPP_STRUCT_MonoCustomAttrs_AttributeInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoCustomAttrs_AttributeInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MonoCustomAttrs_AttributeInfo__Fields_FWDDECL)
#include <Modloader/app/structs/MonoCustomAttrs_AttributeInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoCustomAttrs_AttributeInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
