#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlElement__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlElement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlElement__Fields_DEFINED)
#include <Modloader/app/structs/XmlLinkedNode__Fields.h>
#if defined(IL2CPP_STRUCT_XmlLinkedNode__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlElement__Fields_DEFINED
struct XmlName;
struct XmlAttributeCollection;
struct XmlLinkedNode;
struct XmlElement__Fields {
    struct XmlLinkedNode__Fields _;
    struct XmlName* name;
    struct XmlAttributeCollection* attributes;
    struct XmlLinkedNode* lastChild;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlElement__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlElement__Fields_FWDDECL
#include <Modloader/app/structs/XmlAttributeCollection.h>
#include <Modloader/app/structs/XmlLinkedNode.h>
#include <Modloader/app/structs/XmlName.h>
#endif
#undef IL2CPP_STRUCT_XmlElement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlElement__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlElement__Fields_FWDDECL)
#include <Modloader/app/structs/XmlElement__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlElement__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
