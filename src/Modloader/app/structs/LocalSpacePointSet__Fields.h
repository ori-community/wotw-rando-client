#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LocalSpacePointSet__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LocalSpacePointSet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocalSpacePointSet__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_LocalSpacePointSet__Fields_DEFINED
struct Transform;
struct Vector3__Array;
struct List_1_UnityEngine_Vector3_;
struct LocalSpacePointSet__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform* ParentTransform;
    bool IsParentDynamic;
    struct Color PointColor;
    struct Vector3__Array* LocalSpaceInteractionPoints;
    struct List_1_UnityEngine_Vector3_* m_cachedWorldSpaceInteractionPoints;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LocalSpacePointSet__Fields_FWDDECL)
#define IL2CPP_STRUCT_LocalSpacePointSet__Fields_FWDDECL
#include <Modloader/app/structs/List_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3__Array.h>
#endif
#undef IL2CPP_STRUCT_LocalSpacePointSet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocalSpacePointSet__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LocalSpacePointSet__Fields_FWDDECL)
#include <Modloader/app/structs/LocalSpacePointSet__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LocalSpacePointSet__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
