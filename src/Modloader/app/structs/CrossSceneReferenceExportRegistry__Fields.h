#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CrossSceneReferenceExportRegistry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CrossSceneReferenceExportRegistry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrossSceneReferenceExportRegistry__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_CrossSceneReferenceExportRegistry__Fields_DEFINED
struct List_1_Moon_CrossSceneReferenceExportData_;
struct CrossSceneReferenceExportRegistry__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_Moon_CrossSceneReferenceExportData_* _ExportedObjects_k__BackingField;
    bool m_objectsNeedToBeRemoved;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CrossSceneReferenceExportRegistry__Fields_FWDDECL)
#define IL2CPP_STRUCT_CrossSceneReferenceExportRegistry__Fields_FWDDECL
#include <Modloader/app/structs/List_1_Moon_CrossSceneReferenceExportData_.h>
#endif
#undef IL2CPP_STRUCT_CrossSceneReferenceExportRegistry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrossSceneReferenceExportRegistry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CrossSceneReferenceExportRegistry__Fields_FWDDECL)
#include <Modloader/app/structs/CrossSceneReferenceExportRegistry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CrossSceneReferenceExportRegistry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
