#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_QueryOutputWriter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_QueryOutputWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_QueryOutputWriter__Fields_DEFINED)
#include <Modloader/app/structs/XmlRawWriter__Fields.h>
#if defined(IL2CPP_STRUCT_XmlRawWriter__Fields_DEFINED)
#define IL2CPP_STRUCT_QueryOutputWriter__Fields_DEFINED
struct XmlRawWriter;
struct Dictionary_2_System_Xml_XmlQualifiedName_System_Int32_;
struct BitStack;
struct XmlQualifiedName;
struct String;
struct QueryOutputWriter__Fields {
    struct XmlRawWriter__Fields _;
    struct XmlRawWriter* wrapped;
    bool inCDataSection;
    struct Dictionary_2_System_Xml_XmlQualifiedName_System_Int32_* lookupCDataElems;
    struct BitStack* bitsCData;
    struct XmlQualifiedName* qnameCData;
    bool outputDocType;
    bool checkWellFormedDoc;
    bool hasDocElem;
    bool inAttr;
    struct String* systemId;
    struct String* publicId;
    int32_t depth;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_QueryOutputWriter__Fields_FWDDECL)
#define IL2CPP_STRUCT_QueryOutputWriter__Fields_FWDDECL
#include <Modloader/app/structs/BitStack.h>
#include <Modloader/app/structs/Dictionary_2_System_Xml_XmlQualifiedName_System_Int32_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlRawWriter.h>
#endif
#undef IL2CPP_STRUCT_QueryOutputWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_QueryOutputWriter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_QueryOutputWriter__Fields_FWDDECL)
#include <Modloader/app/structs/QueryOutputWriter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/QueryOutputWriter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
