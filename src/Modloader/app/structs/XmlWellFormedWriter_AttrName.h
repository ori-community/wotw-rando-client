#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlWellFormedWriter_AttrName_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlWellFormedWriter_AttrName_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlWellFormedWriter_AttrName_DEFINED)
#define IL2CPP_STRUCT_XmlWellFormedWriter_AttrName_DEFINED
struct String;
struct XmlWellFormedWriter_AttrName {
    struct String* prefix;
    struct String* namespaceUri;
    struct String* localName;
    int32_t prev;
};
#endif
#if !defined(IL2CPP_STRUCT_XmlWellFormedWriter_AttrName_FWDDECL)
#define IL2CPP_STRUCT_XmlWellFormedWriter_AttrName_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_XmlWellFormedWriter_AttrName_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlWellFormedWriter_AttrName_DEFINED) && !defined(IL2CPP_STRUCT_XmlWellFormedWriter_AttrName_FWDDECL)
#include <Modloader/app/structs/XmlWellFormedWriter_AttrName.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlWellFormedWriter_AttrName.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
