#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CrossAppDomainSink__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CrossAppDomainSink__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrossAppDomainSink__StaticFields_DEFINED)
#define IL2CPP_STRUCT_CrossAppDomainSink__StaticFields_DEFINED
struct Hashtable;
struct MethodInfo_1;
struct CrossAppDomainSink__StaticFields {
    struct Hashtable* s_sinks;
    struct MethodInfo_1* processMessageMethod;
};
#endif
#if !defined(IL2CPP_STRUCT_CrossAppDomainSink__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_CrossAppDomainSink__StaticFields_FWDDECL
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#endif
#undef IL2CPP_STRUCT_CrossAppDomainSink__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrossAppDomainSink__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_CrossAppDomainSink__StaticFields_FWDDECL)
#include <Modloader/app/structs/CrossAppDomainSink__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CrossAppDomainSink__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
