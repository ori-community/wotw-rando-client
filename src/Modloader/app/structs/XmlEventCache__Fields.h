#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlEventCache__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlEventCache__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlEventCache__Fields_DEFINED)
#include <Modloader/app/structs/StringConcat.h>
#include <Modloader/app/structs/XmlRawWriter__Fields.h>
#if defined(IL2CPP_STRUCT_XmlRawWriter__Fields_DEFINED) && defined(IL2CPP_STRUCT_StringConcat_DEFINED)
#define IL2CPP_STRUCT_XmlEventCache__Fields_DEFINED
struct List_1_System_Xml_XmlEventCache_XmlEvent_;
struct XmlEventCache_XmlEvent__Array;
struct String;
struct XmlEventCache__Fields {
    struct XmlRawWriter__Fields _;
    struct List_1_System_Xml_XmlEventCache_XmlEvent_* pages;
    struct XmlEventCache_XmlEvent__Array* pageCurr;
    int32_t pageSize;
    bool hasRootNode;
    struct StringConcat singleText;
    struct String* baseUri;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlEventCache__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlEventCache__Fields_FWDDECL
#include <Modloader/app/structs/List_1_System_Xml_XmlEventCache_XmlEvent_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlEventCache_XmlEvent__Array.h>
#endif
#undef IL2CPP_STRUCT_XmlEventCache__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlEventCache__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlEventCache__Fields_FWDDECL)
#include <Modloader/app/structs/XmlEventCache__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlEventCache__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
