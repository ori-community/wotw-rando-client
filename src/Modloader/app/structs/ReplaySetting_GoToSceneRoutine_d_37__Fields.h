#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReplaySetting_GoToSceneRoutine_d_37__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReplaySetting_GoToSceneRoutine_d_37__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReplaySetting_GoToSceneRoutine_d_37__Fields_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_ReplaySetting_GoToSceneRoutine_d_37__Fields_DEFINED
struct Object;
struct String;
struct Action;
struct SceneMetaData;
struct __declspec(align(8)) ReplaySetting_GoToSceneRoutine_d_37__Fields {
    int32_t __1__state;
    struct Object* __2__current;
    struct String* sceneName;
    bool exit;
    struct Action* onComplete;
    struct Vector3 position;
    struct SceneMetaData* metaData;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReplaySetting_GoToSceneRoutine_d_37__Fields_FWDDECL)
#define IL2CPP_STRUCT_ReplaySetting_GoToSceneRoutine_d_37__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SceneMetaData.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ReplaySetting_GoToSceneRoutine_d_37__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReplaySetting_GoToSceneRoutine_d_37__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ReplaySetting_GoToSceneRoutine_d_37__Fields_FWDDECL)
#include <Modloader/app/structs/ReplaySetting_GoToSceneRoutine_d_37__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReplaySetting_GoToSceneRoutine_d_37__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
