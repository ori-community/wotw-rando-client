#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CrossSceneDependencyDatabase__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CrossSceneDependencyDatabase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrossSceneDependencyDatabase__Fields_DEFINED)
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED)
#define IL2CPP_STRUCT_CrossSceneDependencyDatabase__Fields_DEFINED
struct Dictionary_2_System_Int32_Moon_CrossSceneDependencyData_;
struct List_1_Moon_CrossSceneDependencyData_;
struct CrossSceneDependencyDatabase__Fields {
    struct ScriptableObject__Fields _;
    struct Dictionary_2_System_Int32_Moon_CrossSceneDependencyData_* DependencyDatas;
    int32_t m_incrementer;
    struct List_1_Moon_CrossSceneDependencyData_* m_dependencyDatas;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CrossSceneDependencyDatabase__Fields_FWDDECL)
#define IL2CPP_STRUCT_CrossSceneDependencyDatabase__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Int32_Moon_CrossSceneDependencyData_.h>
#include <Modloader/app/structs/List_1_Moon_CrossSceneDependencyData_.h>
#endif
#undef IL2CPP_STRUCT_CrossSceneDependencyDatabase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrossSceneDependencyDatabase__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CrossSceneDependencyDatabase__Fields_FWDDECL)
#include <Modloader/app/structs/CrossSceneDependencyDatabase__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CrossSceneDependencyDatabase__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
