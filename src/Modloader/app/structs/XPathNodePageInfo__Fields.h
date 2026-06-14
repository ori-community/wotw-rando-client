#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XPathNodePageInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XPathNodePageInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XPathNodePageInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_XPathNodePageInfo__Fields_DEFINED
struct XPathNode__Array;
struct __declspec(align(8)) XPathNodePageInfo__Fields {
    int32_t pageNum;
    int32_t nodeCount;
    struct XPathNode__Array* pageNext;
};
#endif
#if !defined(IL2CPP_STRUCT_XPathNodePageInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_XPathNodePageInfo__Fields_FWDDECL
#include <Modloader/app/structs/XPathNode__Array.h>
#endif
#undef IL2CPP_STRUCT_XPathNodePageInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XPathNodePageInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XPathNodePageInfo__Fields_FWDDECL)
#include <Modloader/app/structs/XPathNodePageInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XPathNodePageInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
