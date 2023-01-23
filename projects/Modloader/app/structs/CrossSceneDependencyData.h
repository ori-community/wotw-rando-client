#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CrossSceneDependencyData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CrossSceneDependencyData_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrossSceneDependencyData_DEFINED)
#include <Modloader/app/structs/CrossSceneDependencyData__Fields.h>
#if defined(IL2CPP_STRUCT_CrossSceneDependencyData__Fields_DEFINED)
#define IL2CPP_STRUCT_CrossSceneDependencyData_DEFINED
struct CrossSceneDependencyData__Class;
struct CrossSceneDependencyData {
    struct CrossSceneDependencyData__Class* klass;
    MonitorData* monitor;
    struct CrossSceneDependencyData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CrossSceneDependencyData_FWDDECL)
#define IL2CPP_STRUCT_CrossSceneDependencyData_FWDDECL
#include <Modloader/app/structs/CrossSceneDependencyData__Class.h>
#endif
#undef IL2CPP_STRUCT_CrossSceneDependencyData_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrossSceneDependencyData_DEFINED) && !defined(IL2CPP_STRUCT_CrossSceneDependencyData_FWDDECL)
#include <Modloader/app/structs/CrossSceneDependencyData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CrossSceneDependencyData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
