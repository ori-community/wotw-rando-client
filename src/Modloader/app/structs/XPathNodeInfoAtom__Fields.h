#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XPathNodeInfoAtom__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XPathNodeInfoAtom__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XPathNodeInfoAtom__Fields_DEFINED)
#define IL2CPP_STRUCT_XPathNodeInfoAtom__Fields_DEFINED
struct String;
struct XPathNode__Array;
struct XPathDocument;
struct XPathNodePageInfo;
struct __declspec(align(8)) XPathNodeInfoAtom__Fields {
    struct String* localName;
    struct String* namespaceUri;
    struct String* prefix;
    struct String* baseUri;
    struct XPathNode__Array* pageParent;
    struct XPathNode__Array* pageSibling;
    struct XPathNode__Array* pageSimilar;
    struct XPathDocument* doc;
    int32_t lineNumBase;
    int32_t linePosBase;
    int32_t hashCode;
    int32_t localNameHash;
    struct XPathNodePageInfo* pageInfo;
};
#endif
#if !defined(IL2CPP_STRUCT_XPathNodeInfoAtom__Fields_FWDDECL)
#define IL2CPP_STRUCT_XPathNodeInfoAtom__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XPathDocument.h>
#include <Modloader/app/structs/XPathNodePageInfo.h>
#include <Modloader/app/structs/XPathNode__Array.h>
#endif
#undef IL2CPP_STRUCT_XPathNodeInfoAtom__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XPathNodeInfoAtom__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XPathNodeInfoAtom__Fields_FWDDECL)
#include <Modloader/app/structs/XPathNodeInfoAtom__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XPathNodeInfoAtom__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
