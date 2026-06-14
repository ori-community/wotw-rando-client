#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CrossSceneDependencyInjector_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CrossSceneDependencyInjector_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrossSceneDependencyInjector_DEFINED)
#include <Modloader/app/structs/CrossSceneDependencyInjector__Fields.h>
#if defined(IL2CPP_STRUCT_CrossSceneDependencyInjector__Fields_DEFINED)
#define IL2CPP_STRUCT_CrossSceneDependencyInjector_DEFINED
struct CrossSceneDependencyInjector__Class;
struct CrossSceneDependencyInjector {
    struct CrossSceneDependencyInjector__Class* klass;
    MonitorData* monitor;
    struct CrossSceneDependencyInjector__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CrossSceneDependencyInjector_FWDDECL)
#define IL2CPP_STRUCT_CrossSceneDependencyInjector_FWDDECL
#include <Modloader/app/structs/CrossSceneDependencyInjector__Class.h>
#endif
#undef IL2CPP_STRUCT_CrossSceneDependencyInjector_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrossSceneDependencyInjector_DEFINED) && !defined(IL2CPP_STRUCT_CrossSceneDependencyInjector_FWDDECL)
#include <Modloader/app/structs/CrossSceneDependencyInjector.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CrossSceneDependencyInjector.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
