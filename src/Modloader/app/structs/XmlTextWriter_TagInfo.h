#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XmlTextWriter_TagInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XmlTextWriter_TagInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTextWriter_TagInfo_DEFINED)
#include <Modloader/app/structs/XmlSpace__Enum.h>
#include <Modloader/app/structs/XmlTextWriter_NamespaceState__Enum.h>
#if defined(IL2CPP_STRUCT_XmlTextWriter_NamespaceState__Enum_DEFINED) && defined(IL2CPP_STRUCT_XmlSpace__Enum_DEFINED)
#define IL2CPP_STRUCT_XmlTextWriter_TagInfo_DEFINED
struct String;
struct XmlTextWriter_TagInfo {
    struct String* name;
    struct String* prefix;
    struct String* defaultNs;
    XmlTextWriter_NamespaceState__Enum defaultNsState;

    XmlSpace__Enum xmlSpace;

    struct String* xmlLang;
    int32_t prevNsTop;
    int32_t prefixCount;
    bool mixed;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XmlTextWriter_TagInfo_FWDDECL)
#define IL2CPP_STRUCT_XmlTextWriter_TagInfo_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_XmlTextWriter_TagInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_XmlTextWriter_TagInfo_DEFINED) && !defined(IL2CPP_STRUCT_XmlTextWriter_TagInfo_FWDDECL)
#include <Modloader/app/structs/XmlTextWriter_TagInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XmlTextWriter_TagInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
