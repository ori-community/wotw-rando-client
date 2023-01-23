#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CrossSceneReferenceExportData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CrossSceneReferenceExportData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrossSceneReferenceExportData__Fields_DEFINED)
#include <Modloader/app/structs/CrossSceneReferenceId.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_CrossSceneReferenceId_DEFINED)
#define IL2CPP_STRUCT_CrossSceneReferenceExportData__Fields_DEFINED
struct Object_1;
struct CrossSceneReferenceExportData__Fields {
    struct MonoBehaviour__Fields _;
    struct CrossSceneReferenceId m_crossSceneReferenceId;
    struct Object_1* m_objectRef;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CrossSceneReferenceExportData__Fields_FWDDECL)
#define IL2CPP_STRUCT_CrossSceneReferenceExportData__Fields_FWDDECL
#include <Modloader/app/structs/Object_1.h>
#endif
#undef IL2CPP_STRUCT_CrossSceneReferenceExportData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrossSceneReferenceExportData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CrossSceneReferenceExportData__Fields_FWDDECL)
#include <Modloader/app/structs/CrossSceneReferenceExportData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CrossSceneReferenceExportData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
