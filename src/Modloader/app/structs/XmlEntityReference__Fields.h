#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlEntityReference__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlEntityReference__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlEntityReference__Fields_DEFINED)
#include <Modloader/app/structs/XmlLinkedNode__Fields.h>
#if defined(IL2CPP_STRUCT_XmlLinkedNode__Fields_DEFINED)
#define IL2CPP_STRUCT_XmlEntityReference__Fields_DEFINED
struct String;
struct XmlLinkedNode;
struct XmlEntityReference__Fields {
    struct XmlLinkedNode__Fields _;
    struct String* name;
    struct XmlLinkedNode* lastChild;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlEntityReference__Fields_FWDDECL)
#define IL2CPP_STRUCT_XmlEntityReference__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlLinkedNode.h>
#endif
#undef IL2CPP_STRUCT_XmlEntityReference__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlEntityReference__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XmlEntityReference__Fields_FWDDECL)
#include <Modloader/app/structs/XmlEntityReference__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlEntityReference__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
