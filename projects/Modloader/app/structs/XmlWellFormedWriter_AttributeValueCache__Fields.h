#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlWellFormedWriter_AttributeValueCache__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlWellFormedWriter_AttributeValueCache__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlWellFormedWriter_AttributeValueCache__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlWellFormedWriter_AttributeValueCache__Fields_DEFINED
struct StringBuilder;
struct String;
struct XmlWellFormedWriter_AttributeValueCache_Item__Array;
struct __declspec(align(8)) XmlWellFormedWriter_AttributeValueCache__Fields {
    struct StringBuilder* stringValue;
    struct String* singleStringValue;
    struct XmlWellFormedWriter_AttributeValueCache_Item__Array* items;
    int32_t firstItem;
    int32_t lastItem;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlWellFormedWriter_AttributeValueCache__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlWellFormedWriter_AttributeValueCache__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/XmlWellFormedWriter_AttributeValueCache_Item__Array.h>
#endif
#undef IL2CPP_STRUCT_XmlWellFormedWriter_AttributeValueCache__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlWellFormedWriter_AttributeValueCache__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlWellFormedWriter_AttributeValueCache__Fields_FWDDECL)
#include <Modloader/app/structs/XmlWellFormedWriter_AttributeValueCache__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlWellFormedWriter_AttributeValueCache__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
