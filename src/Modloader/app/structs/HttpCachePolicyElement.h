#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpCachePolicyElement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpCachePolicyElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpCachePolicyElement_DEFINED)
#define IL2CPP_STRUCT_HttpCachePolicyElement_DEFINED
struct HttpCachePolicyElement__Class;
struct HttpCachePolicyElement {
    struct HttpCachePolicyElement__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_HttpCachePolicyElement_FWDDECL)
#define IL2CPP_STRUCT_HttpCachePolicyElement_FWDDECL
#include <Modloader/app/structs/HttpCachePolicyElement__Class.h>
#endif
#undef IL2CPP_STRUCT_HttpCachePolicyElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpCachePolicyElement_DEFINED) && !defined(IL2CPP_STRUCT_HttpCachePolicyElement_FWDDECL)
#include <Modloader/app/structs/HttpCachePolicyElement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpCachePolicyElement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
