#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CrossSceneReferenceImportData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CrossSceneReferenceImportData_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrossSceneReferenceImportData_DEFINED)
#include <Modloader/app/structs/CrossSceneReferenceImportData__Fields.h>
#if defined(IL2CPP_STRUCT_CrossSceneReferenceImportData__Fields_DEFINED)
#define IL2CPP_STRUCT_CrossSceneReferenceImportData_DEFINED
struct CrossSceneReferenceImportData__Class;
struct CrossSceneReferenceImportData {
    struct CrossSceneReferenceImportData__Class* klass;
    MonitorData* monitor;
    struct CrossSceneReferenceImportData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CrossSceneReferenceImportData_FWDDECL)
#define IL2CPP_STRUCT_CrossSceneReferenceImportData_FWDDECL
#include <Modloader/app/structs/CrossSceneReferenceImportData__Class.h>
#endif
#undef IL2CPP_STRUCT_CrossSceneReferenceImportData_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrossSceneReferenceImportData_DEFINED) && !defined(IL2CPP_STRUCT_CrossSceneReferenceImportData_FWDDECL)
#include <Modloader/app/structs/CrossSceneReferenceImportData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CrossSceneReferenceImportData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
