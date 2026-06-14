#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CrossSceneDependency__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CrossSceneDependency__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrossSceneDependency__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_CrossSceneDependency__Fields_DEFINED
struct CrossSceneDependencyDatabase;
struct CrossSceneDependency__Fields {
    struct MonoBehaviour__Fields _;
    int32_t ObjectID;
    struct CrossSceneDependencyDatabase* DependencyDatabase;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CrossSceneDependency__Fields_FWDDECL)
#define IL2CPP_STRUCT_CrossSceneDependency__Fields_FWDDECL
#include <Modloader/app/structs/CrossSceneDependencyDatabase.h>
#endif
#undef IL2CPP_STRUCT_CrossSceneDependency__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrossSceneDependency__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CrossSceneDependency__Fields_FWDDECL)
#include <Modloader/app/structs/CrossSceneDependency__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CrossSceneDependency__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
