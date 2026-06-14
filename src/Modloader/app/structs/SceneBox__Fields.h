#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneBox__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneBox__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneBox__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SceneBox__Fields_DEFINED
struct Transform;
struct List_1_UnityEngine_Transform_;
struct SceneBox__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform* ScrollLockTop;
    struct Transform* ScrollLockBottom;
    struct Transform* ScrollLockLeft;
    struct Transform* ScrollLockRight;
    struct List_1_UnityEngine_Transform_* MatchSizes;
    struct Vector3 m_lastPosition;
    struct Vector3 m_lastScale;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneBox__Fields_FWDDECL)
#define IL2CPP_STRUCT_SceneBox__Fields_FWDDECL
#include <Modloader/app/structs/List_1_UnityEngine_Transform_.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SceneBox__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneBox__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SceneBox__Fields_FWDDECL)
#include <Modloader/app/structs/SceneBox__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneBox__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
