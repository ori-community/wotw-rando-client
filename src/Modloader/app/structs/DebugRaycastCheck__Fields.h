#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugRaycastCheck__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugRaycastCheck__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugRaycastCheck__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_DebugRaycastCheck__Fields_DEFINED
struct Transform;
struct List_1_UnityEngine_Vector2_;
struct DebugRaycastCheck__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform* Target;
    float SpherecastRadiusCheck;
    struct List_1_UnityEngine_Vector2_* m_hitPoints;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DebugRaycastCheck__Fields_FWDDECL)
#define IL2CPP_STRUCT_DebugRaycastCheck__Fields_FWDDECL
#include <Modloader/app/structs/List_1_UnityEngine_Vector2_.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_DebugRaycastCheck__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugRaycastCheck__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DebugRaycastCheck__Fields_FWDDECL)
#include <Modloader/app/structs/DebugRaycastCheck__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugRaycastCheck__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
