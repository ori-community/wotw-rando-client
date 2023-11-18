#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CrossSceneDependency_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CrossSceneDependency_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrossSceneDependency_DEFINED)
#include <Modloader/app/structs/CrossSceneDependency__Fields.h>
#if defined(IL2CPP_STRUCT_CrossSceneDependency__Fields_DEFINED)
#define IL2CPP_STRUCT_CrossSceneDependency_DEFINED
struct CrossSceneDependency__Class;
struct CrossSceneDependency {
    struct CrossSceneDependency__Class* klass;
    MonitorData* monitor;
    struct CrossSceneDependency__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CrossSceneDependency_FWDDECL)
#define IL2CPP_STRUCT_CrossSceneDependency_FWDDECL
#include <Modloader/app/structs/CrossSceneDependency__Class.h>
#endif
#undef IL2CPP_STRUCT_CrossSceneDependency_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrossSceneDependency_DEFINED) && !defined(IL2CPP_STRUCT_CrossSceneDependency_FWDDECL)
#include <Modloader/app/structs/CrossSceneDependency.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CrossSceneDependency.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
