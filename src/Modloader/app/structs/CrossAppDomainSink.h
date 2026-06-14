#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CrossAppDomainSink_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CrossAppDomainSink_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrossAppDomainSink_DEFINED)
#include <Modloader/app/structs/CrossAppDomainSink__Fields.h>
#if defined(IL2CPP_STRUCT_CrossAppDomainSink__Fields_DEFINED)
#define IL2CPP_STRUCT_CrossAppDomainSink_DEFINED
struct CrossAppDomainSink__Class;
struct CrossAppDomainSink {
    struct CrossAppDomainSink__Class* klass;
    MonitorData* monitor;
    struct CrossAppDomainSink__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CrossAppDomainSink_FWDDECL)
#define IL2CPP_STRUCT_CrossAppDomainSink_FWDDECL
#include <Modloader/app/structs/CrossAppDomainSink__Class.h>
#endif
#undef IL2CPP_STRUCT_CrossAppDomainSink_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrossAppDomainSink_DEFINED) && !defined(IL2CPP_STRUCT_CrossAppDomainSink_FWDDECL)
#include <Modloader/app/structs/CrossAppDomainSink.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CrossAppDomainSink.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
