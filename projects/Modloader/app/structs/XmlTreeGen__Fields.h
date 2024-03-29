#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlTreeGen__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlTreeGen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTreeGen__Fields_DEFINED)
#include <Modloader/app/structs/SchemaFormat__Enum.h>
#if defined(IL2CPP_STRUCT_SchemaFormat__Enum_DEFINED)
#define IL2CPP_STRUCT_XmlTreeGen__Fields_DEFINED
struct ArrayList;
struct Hashtable;
struct DataSet;
struct XmlDocument;
struct XmlElement;
struct String;
struct Converter_2_Type_String_;
struct __declspec(align(8)) XmlTreeGen__Fields {
    struct ArrayList* _constraintNames;
    struct Hashtable* _namespaces;
    struct Hashtable* _autogenerated;
    struct Hashtable* _prefixes;
    struct DataSet* _ds_1;
    struct ArrayList* _tables;
    struct ArrayList* _relations;
    struct XmlDocument* _dc;
    struct XmlElement* _sRoot;
    int32_t _prefixCount;
    SchemaFormat__Enum _schFormat;

    struct String* _filePath;
    struct String* _fileName;
    struct String* _fileExt;
    struct XmlElement* _dsElement;
    struct XmlElement* _constraintSeparator;
    struct Converter_2_Type_String_* _targetConverter;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlTreeGen__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlTreeGen__Fields_FWDDECL
#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/Converter_2_Type_String_.h>
#include <Modloader/app/structs/DataSet.h>
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlDocument.h>
#include <Modloader/app/structs/XmlElement.h>
#endif
#undef IL2CPP_STRUCT_XmlTreeGen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTreeGen__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlTreeGen__Fields_FWDDECL)
#include <Modloader/app/structs/XmlTreeGen__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlTreeGen__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
