#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IsInSceneCondition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IsInSceneCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IsInSceneCondition__Fields_DEFINED)
#include <Modloader/app/structs/Condition_1__Fields.h>
#if defined(IL2CPP_STRUCT_Condition_1__Fields_DEFINED)
#define IL2CPP_STRUCT_IsInSceneCondition__Fields_DEFINED
struct SceneMetaData;
struct MoonReference_1_UnityEngine_Transform_;
struct IsInSceneCondition__Fields {
    struct Condition_1__Fields _;
    struct SceneMetaData* SceneMetaData;
    struct MoonReference_1_UnityEngine_Transform_* Target;
    bool Inverse;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IsInSceneCondition__Fields_FWDDECL)
#define IL2CPP_STRUCT_IsInSceneCondition__Fields_FWDDECL
#include <Modloader/app/structs/MoonReference_1_UnityEngine_Transform_.h>
#include <Modloader/app/structs/SceneMetaData.h>
#endif
#undef IL2CPP_STRUCT_IsInSceneCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IsInSceneCondition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_IsInSceneCondition__Fields_FWDDECL)
#include <Modloader/app/structs/IsInSceneCondition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IsInSceneCondition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
