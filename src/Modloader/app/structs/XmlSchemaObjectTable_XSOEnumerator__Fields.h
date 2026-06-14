#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlSchemaObjectTable_XSOEnumerator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlSchemaObjectTable_XSOEnumerator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaObjectTable_XSOEnumerator__Fields_DEFINED)
#include <Modloader/app/structs/XmlSchemaObjectTable_EnumeratorType__Enum.h>
#if defined(IL2CPP_STRUCT_XmlSchemaObjectTable_EnumeratorType__Enum_DEFINED)
#define IL2CPP_STRUCT_XmlSchemaObjectTable_XSOEnumerator__Fields_DEFINED
struct List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_;
struct XmlQualifiedName;
struct XmlSchemaObject;
struct __declspec(align(8)) XmlSchemaObjectTable_XSOEnumerator__Fields {
    struct List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_* entries;
    XmlSchemaObjectTable_EnumeratorType__Enum enumType;

    int32_t currentIndex;
    int32_t size;
    struct XmlQualifiedName* currentKey;
    struct XmlSchemaObject* currentValue;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlSchemaObjectTable_XSOEnumerator__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlSchemaObjectTable_XSOEnumerator__Fields_FWDDECL
#include <Modloader/app/structs/List_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlSchemaObject.h>
#endif
#undef IL2CPP_STRUCT_XmlSchemaObjectTable_XSOEnumerator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlSchemaObjectTable_XSOEnumerator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlSchemaObjectTable_XSOEnumerator__Fields_FWDDECL)
#include <Modloader/app/structs/XmlSchemaObjectTable_XSOEnumerator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlSchemaObjectTable_XSOEnumerator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
