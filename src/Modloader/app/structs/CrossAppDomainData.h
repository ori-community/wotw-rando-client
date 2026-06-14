#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CrossAppDomainData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CrossAppDomainData_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrossAppDomainData_DEFINED)
#include <Modloader/app/structs/CrossAppDomainData__Fields.h>
#if defined(IL2CPP_STRUCT_CrossAppDomainData__Fields_DEFINED)
#define IL2CPP_STRUCT_CrossAppDomainData_DEFINED
struct CrossAppDomainData__Class;
struct CrossAppDomainData {
    struct CrossAppDomainData__Class* klass;
    MonitorData* monitor;
    struct CrossAppDomainData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CrossAppDomainData_FWDDECL)
#define IL2CPP_STRUCT_CrossAppDomainData_FWDDECL
#include <Modloader/app/structs/CrossAppDomainData__Class.h>
#endif
#undef IL2CPP_STRUCT_CrossAppDomainData_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrossAppDomainData_DEFINED) && !defined(IL2CPP_STRUCT_CrossAppDomainData_FWDDECL)
#include <Modloader/app/structs/CrossAppDomainData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CrossAppDomainData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
