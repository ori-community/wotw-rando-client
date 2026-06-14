#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CrossSceneDependencyDatabase_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CrossSceneDependencyDatabase_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrossSceneDependencyDatabase_DEFINED)
#include <Modloader/app/structs/CrossSceneDependencyDatabase__Fields.h>
#if defined(IL2CPP_STRUCT_CrossSceneDependencyDatabase__Fields_DEFINED)
#define IL2CPP_STRUCT_CrossSceneDependencyDatabase_DEFINED
struct CrossSceneDependencyDatabase__Class;
struct CrossSceneDependencyDatabase {
    struct CrossSceneDependencyDatabase__Class* klass;
    MonitorData* monitor;
    struct CrossSceneDependencyDatabase__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CrossSceneDependencyDatabase_FWDDECL)
#define IL2CPP_STRUCT_CrossSceneDependencyDatabase_FWDDECL
#include <Modloader/app/structs/CrossSceneDependencyDatabase__Class.h>
#endif
#undef IL2CPP_STRUCT_CrossSceneDependencyDatabase_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrossSceneDependencyDatabase_DEFINED) && !defined(IL2CPP_STRUCT_CrossSceneDependencyDatabase_FWDDECL)
#include <Modloader/app/structs/CrossSceneDependencyDatabase.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CrossSceneDependencyDatabase.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
