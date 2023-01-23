#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CrossSceneReferenceId_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CrossSceneReferenceId_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrossSceneReferenceId_DEFINED)
#define IL2CPP_STRUCT_CrossSceneReferenceId_DEFINED
struct CrossSceneReferenceId {
    int32_t m_sceneGuidA;
    int32_t m_sceneGuidB;
    int32_t m_sceneGuidC;
    int32_t m_sceneGuidD;
    int32_t m_objectId;
};
#endif
#if !defined(IL2CPP_STRUCT_CrossSceneReferenceId_FWDDECL)
#define IL2CPP_STRUCT_CrossSceneReferenceId_FWDDECL
#endif
#undef IL2CPP_STRUCT_CrossSceneReferenceId_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrossSceneReferenceId_DEFINED) && !defined(IL2CPP_STRUCT_CrossSceneReferenceId_FWDDECL)
#include <Modloader/app/structs/CrossSceneReferenceId.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CrossSceneReferenceId.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
