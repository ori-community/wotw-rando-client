#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CrossSceneReference_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CrossSceneReference_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrossSceneReference_DEFINED)
#define IL2CPP_STRUCT_CrossSceneReference_DEFINED
struct CrossSceneReference__Class;
struct CrossSceneReference {
    struct CrossSceneReference__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_CrossSceneReference_FWDDECL)
#define IL2CPP_STRUCT_CrossSceneReference_FWDDECL
#include <Modloader/app/structs/CrossSceneReference__Class.h>
#endif
#undef IL2CPP_STRUCT_CrossSceneReference_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrossSceneReference_DEFINED) && !defined(IL2CPP_STRUCT_CrossSceneReference_FWDDECL)
#include <Modloader/app/structs/CrossSceneReference.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CrossSceneReference.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
