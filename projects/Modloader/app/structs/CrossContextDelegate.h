#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CrossContextDelegate_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CrossContextDelegate_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrossContextDelegate_DEFINED)
#include <Modloader/app/structs/CrossContextDelegate__Fields.h>
#if defined(IL2CPP_STRUCT_CrossContextDelegate__Fields_DEFINED)
#define IL2CPP_STRUCT_CrossContextDelegate_DEFINED
struct CrossContextDelegate__Class;
struct CrossContextDelegate {
    struct CrossContextDelegate__Class* klass;
    MonitorData* monitor;
    struct CrossContextDelegate__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CrossContextDelegate_FWDDECL)
#define IL2CPP_STRUCT_CrossContextDelegate_FWDDECL
#include <Modloader/app/structs/CrossContextDelegate__Class.h>
#endif
#undef IL2CPP_STRUCT_CrossContextDelegate_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrossContextDelegate_DEFINED) && !defined(IL2CPP_STRUCT_CrossContextDelegate_FWDDECL)
#include <Modloader/app/structs/CrossContextDelegate.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CrossContextDelegate.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
