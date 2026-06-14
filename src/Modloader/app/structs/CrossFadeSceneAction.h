#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CrossFadeSceneAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CrossFadeSceneAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrossFadeSceneAction_DEFINED)
#include <Modloader/app/structs/CrossFadeSceneAction__Fields.h>
#if defined(IL2CPP_STRUCT_CrossFadeSceneAction__Fields_DEFINED)
#define IL2CPP_STRUCT_CrossFadeSceneAction_DEFINED
struct CrossFadeSceneAction__Class;
struct CrossFadeSceneAction {
    struct CrossFadeSceneAction__Class* klass;
    MonitorData* monitor;
    struct CrossFadeSceneAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CrossFadeSceneAction_FWDDECL)
#define IL2CPP_STRUCT_CrossFadeSceneAction_FWDDECL
#include <Modloader/app/structs/CrossFadeSceneAction__Class.h>
#endif
#undef IL2CPP_STRUCT_CrossFadeSceneAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrossFadeSceneAction_DEFINED) && !defined(IL2CPP_STRUCT_CrossFadeSceneAction_FWDDECL)
#include <Modloader/app/structs/CrossFadeSceneAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CrossFadeSceneAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
