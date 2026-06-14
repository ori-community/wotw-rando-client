#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XPathDocumentNavigator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XPathDocumentNavigator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XPathDocumentNavigator__Fields_DEFINED)
#define IL2CPP_STRUCT_XPathDocumentNavigator__Fields_DEFINED
struct XPathNode__Array;
struct __declspec(align(8)) XPathDocumentNavigator__Fields {
    struct XPathNode__Array* pageCurrent;
    struct XPathNode__Array* pageParent;
    int32_t idxCurrent;
    int32_t idxParent;
};
#endif
#if !defined(IL2CPP_STRUCT_XPathDocumentNavigator__Fields_FWDDECL)
#define IL2CPP_STRUCT_XPathDocumentNavigator__Fields_FWDDECL
#include <Modloader/app/structs/XPathNode__Array.h>
#endif
#undef IL2CPP_STRUCT_XPathDocumentNavigator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XPathDocumentNavigator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XPathDocumentNavigator__Fields_FWDDECL)
#include <Modloader/app/structs/XPathDocumentNavigator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XPathDocumentNavigator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
