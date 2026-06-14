#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XSDSchema__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XSDSchema__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XSDSchema__Fields_DEFINED)
#define IL2CPP_STRUCT_XSDSchema__Fields_DEFINED
struct XmlSchemaSet;
struct XmlSchemaElement;
struct DataSet;
struct String;
struct ArrayList;
struct Hashtable;
struct XmlSchemaObjectCollection;
struct Dictionary_2_System_Data_DataTable_List_1_System_Data_DataTable_;
struct __declspec(align(8)) XSDSchema__Fields {
    struct XmlSchemaSet* _schemaSet;
    struct XmlSchemaElement* _dsElement;
    struct DataSet* _ds_1;
    struct String* _schemaName;
    struct ArrayList* _columnExpressions;
    struct Hashtable* _constraintNodes;
    struct ArrayList* _refTables;
    struct ArrayList* _complexTypes;
    struct XmlSchemaObjectCollection* _annotations;
    struct XmlSchemaObjectCollection* _elements;
    struct Hashtable* _attributes;
    struct Hashtable* _elementsTable;
    struct Hashtable* _attributeGroups;
    struct Hashtable* _schemaTypes;
    struct Hashtable* _expressions;
    struct Dictionary_2_System_Data_DataTable_List_1_System_Data_DataTable_* _tableDictionary;
    struct Hashtable* _udSimpleTypes;
    struct Hashtable* _existingSimpleTypeMap;
    bool _fromInference;
};
#endif
#if !defined(IL2CPP_STRUCT_XSDSchema__Fields_FWDDECL)
#define IL2CPP_STRUCT_XSDSchema__Fields_FWDDECL
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/DataSet.h>
#include <Modloader/app/structs/Dictionary_2_System_Data_DataTable_List_1_System_Data_DataTable_.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlSchemaElement.h>
#include <Modloader/app/structs/XmlSchemaObjectCollection.h>
#include <Modloader/app/structs/XmlSchemaSet.h>
#endif
#undef IL2CPP_STRUCT_XSDSchema__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XSDSchema__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XSDSchema__Fields_FWDDECL)
#include <Modloader/app/structs/XSDSchema__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XSDSchema__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
