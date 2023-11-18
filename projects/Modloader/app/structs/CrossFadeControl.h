#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CrossFadeControl_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CrossFadeControl_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrossFadeControl_DEFINED)
#include <Modloader/app/structs/CrossFadeControl__Fields.h>
#if defined(IL2CPP_STRUCT_CrossFadeControl__Fields_DEFINED)
#define IL2CPP_STRUCT_CrossFadeControl_DEFINED
struct CrossFadeControl__Class;
struct CrossFadeControl {
    struct CrossFadeControl__Class* klass;
    MonitorData* monitor;
    struct CrossFadeControl__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CrossFadeControl_FWDDECL)
#define IL2CPP_STRUCT_CrossFadeControl_FWDDECL
#include <Modloader/app/structs/CrossFadeControl__Class.h>
#endif
#undef IL2CPP_STRUCT_CrossFadeControl_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrossFadeControl_DEFINED) && !defined(IL2CPP_STRUCT_CrossFadeControl_FWDDECL)
#include <Modloader/app/structs/CrossFadeControl.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CrossFadeControl.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
