#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XPathNodeRef_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XPathNodeRef_INITIALIZING
#if !defined(IL2CPP_STRUCT_XPathNodeRef_DEFINED)
#define IL2CPP_STRUCT_XPathNodeRef_DEFINED
struct XPathNode__Array;
struct XPathNodeRef {
    struct XPathNode__Array* page;
    int32_t idx;
};
#endif
#if !defined(IL2CPP_STRUCT_XPathNodeRef_FWDDECL)
#define IL2CPP_STRUCT_XPathNodeRef_FWDDECL
#include <Modloader/app/structs/XPathNode__Array.h>
#endif
#undef IL2CPP_STRUCT_XPathNodeRef_INITIALIZING
#if !defined(IL2CPP_STRUCT_XPathNodeRef_DEFINED) && !defined(IL2CPP_STRUCT_XPathNodeRef_FWDDECL)
#include <Modloader/app/structs/XPathNodeRef.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XPathNodeRef.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
