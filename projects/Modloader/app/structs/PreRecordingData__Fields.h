#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PreRecordingData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PreRecordingData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PreRecordingData__Fields_DEFINED)
#define IL2CPP_STRUCT_PreRecordingData__Fields_DEFINED
struct List_1_PreRecordingInstantiationEntry_;
struct List_1_PreRecordingDynamicSceneObjectEntry_;
struct List_1_PreRecordingUberStateEntry_;
struct __declspec(align(8)) PreRecordingData__Fields {
    struct List_1_PreRecordingInstantiationEntry_* InstantiationTracking;
    struct List_1_PreRecordingDynamicSceneObjectEntry_* SceneObjectsTracking;
    struct List_1_PreRecordingUberStateEntry_* UberStatesTracking;
};
#endif
#if !defined(IL2CPP_STRUCT_PreRecordingData__Fields_FWDDECL)
#define IL2CPP_STRUCT_PreRecordingData__Fields_FWDDECL
#include <Modloader/app/structs/List_1_PreRecordingDynamicSceneObjectEntry_.h>
#include <Modloader/app/structs/List_1_PreRecordingInstantiationEntry_.h>
#include <Modloader/app/structs/List_1_PreRecordingUberStateEntry_.h>
#endif
#undef IL2CPP_STRUCT_PreRecordingData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PreRecordingData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PreRecordingData__Fields_FWDDECL)
#include <Modloader/app/structs/PreRecordingData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PreRecordingData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
