#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CrossAppDomainChannel_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CrossAppDomainChannel_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrossAppDomainChannel_DEFINED)
#define IL2CPP_STRUCT_CrossAppDomainChannel_DEFINED
struct CrossAppDomainChannel__Class;
struct CrossAppDomainChannel {
    struct CrossAppDomainChannel__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_CrossAppDomainChannel_FWDDECL)
#define IL2CPP_STRUCT_CrossAppDomainChannel_FWDDECL
#include <Modloader/app/structs/CrossAppDomainChannel__Class.h>
#endif
#undef IL2CPP_STRUCT_CrossAppDomainChannel_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrossAppDomainChannel_DEFINED) && !defined(IL2CPP_STRUCT_CrossAppDomainChannel_FWDDECL)
#include <Modloader/app/structs/CrossAppDomainChannel.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CrossAppDomainChannel.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
