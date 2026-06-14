#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimesliceSceneUnloadTask__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimesliceSceneUnloadTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimesliceSceneUnloadTask__Fields_DEFINED)
#include <Modloader/app/structs/TimeSlicedCoroutineJob__Fields.h>
#if defined(IL2CPP_STRUCT_TimeSlicedCoroutineJob__Fields_DEFINED)
#define IL2CPP_STRUCT_TimesliceSceneUnloadTask__Fields_DEFINED
struct String;
struct List_1_UnityEngine_GameObject_;
struct GameObject;
struct TimesliceSceneUnloadTask__Fields {
    struct TimeSlicedCoroutineJob__Fields _;
    struct String* _SceneName_k__BackingField;
    struct List_1_UnityEngine_GameObject_* m_targetObjects;
    bool m_reversedOrder;
    struct GameObject* m_sceneRootObject;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimesliceSceneUnloadTask__Fields_FWDDECL)
#define IL2CPP_STRUCT_TimesliceSceneUnloadTask__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_TimesliceSceneUnloadTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimesliceSceneUnloadTask__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TimesliceSceneUnloadTask__Fields_FWDDECL)
#include <Modloader/app/structs/TimesliceSceneUnloadTask__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimesliceSceneUnloadTask__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
