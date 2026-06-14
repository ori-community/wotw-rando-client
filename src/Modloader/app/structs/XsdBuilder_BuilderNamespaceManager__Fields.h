#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XsdBuilder_BuilderNamespaceManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XsdBuilder_BuilderNamespaceManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XsdBuilder_BuilderNamespaceManager__Fields_DEFINED)
#include <Modloader/app/structs/XmlNamespaceManager__Fields.h>
#if defined(IL2CPP_STRUCT_XmlNamespaceManager__Fields_DEFINED)
#define IL2CPP_STRUCT_XsdBuilder_BuilderNamespaceManager__Fields_DEFINED
struct XmlNamespaceManager;
struct XmlReader;
struct XsdBuilder_BuilderNamespaceManager__Fields {
    struct XmlNamespaceManager__Fields _;
    struct XmlNamespaceManager* nsMgr;
    struct XmlReader* reader;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XsdBuilder_BuilderNamespaceManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_XsdBuilder_BuilderNamespaceManager__Fields_FWDDECL
#include <Modloader/app/structs/XmlNamespaceManager.h>
#include <Modloader/app/structs/XmlReader.h>
#endif
#undef IL2CPP_STRUCT_XsdBuilder_BuilderNamespaceManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XsdBuilder_BuilderNamespaceManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XsdBuilder_BuilderNamespaceManager__Fields_FWDDECL)
#include <Modloader/app/structs/XsdBuilder_BuilderNamespaceManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XsdBuilder_BuilderNamespaceManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
