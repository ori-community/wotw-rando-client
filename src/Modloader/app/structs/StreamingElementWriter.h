#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StreamingElementWriter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StreamingElementWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_StreamingElementWriter_DEFINED)
#include <Modloader/app/structs/NamespaceResolver.h>
#if defined(IL2CPP_STRUCT_NamespaceResolver_DEFINED)
#define IL2CPP_STRUCT_StreamingElementWriter_DEFINED
struct XmlWriter;
struct XStreamingElement;
struct List_1_System_Xml_Linq_XAttribute_;
struct StreamingElementWriter {
    struct XmlWriter* writer;
    struct XStreamingElement* element;
    struct List_1_System_Xml_Linq_XAttribute_* attributes;
    struct NamespaceResolver resolver;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StreamingElementWriter_FWDDECL)
#define IL2CPP_STRUCT_StreamingElementWriter_FWDDECL
#include <Modloader/app/structs/List_1_System_Xml_Linq_XAttribute_.h>
#include <Modloader/app/structs/XStreamingElement.h>
#include <Modloader/app/structs/XmlWriter.h>
#endif
#undef IL2CPP_STRUCT_StreamingElementWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_StreamingElementWriter_DEFINED) && !defined(IL2CPP_STRUCT_StreamingElementWriter_FWDDECL)
#include <Modloader/app/structs/StreamingElementWriter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StreamingElementWriter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
