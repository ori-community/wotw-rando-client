#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlWellFormedWriter_ElementScope_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlWellFormedWriter_ElementScope_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlWellFormedWriter_ElementScope_DEFINED)
#include <Modloader/app/structs/XmlSpace__Enum.h>
#if defined(IL2CPP_STRUCT_XmlSpace__Enum_DEFINED)
#define IL2CPP_STRUCT_XmlWellFormedWriter_ElementScope_DEFINED
struct String;
struct XmlWellFormedWriter_ElementScope {
    int32_t prevNSTop;
    struct String* prefix;
    struct String* localName;
    struct String* namespaceUri;
    XmlSpace__Enum xmlSpace;

    struct String* xmlLang;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlWellFormedWriter_ElementScope_FWDDECL)
#define IL2CPP_STRUCT_XmlWellFormedWriter_ElementScope_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_XmlWellFormedWriter_ElementScope_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlWellFormedWriter_ElementScope_DEFINED) && !defined(IL2CPP_STRUCT_XmlWellFormedWriter_ElementScope_FWDDECL)
#include <Modloader/app/structs/XmlWellFormedWriter_ElementScope.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlWellFormedWriter_ElementScope.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
