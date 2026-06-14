#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Polygon_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Polygon_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Polygon_1__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_Polygon_1__Fields_DEFINED
struct List_1_UnityEngine_Vector2_;
struct HashSet_1_System_Int32_;
struct Polygon_ShapeData;
struct Action;
struct Polygon_1__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_UnityEngine_Vector2_* Points;
    struct HashSet_1_System_Int32_* Selected;
    float SmoothAngle;
    struct Vector2 FrontUVScale;
    struct Vector2 FrontUVOffset;
    struct Vector2 BackUVScale;
    struct Vector2 BackUVOffset;
    struct Vector2 SideUVScale;
    struct Vector2 SideUVOffset;
    struct Polygon_ShapeData* PolygonMesh;
    struct Polygon_ShapeData* PolygonCollider;
    bool ClosedShape;
    bool Invert;
    int32_t InsertBefore;
    struct Action* OnPolygonUpdateComponents;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Polygon_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_Polygon_1__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/HashSet_1_System_Int32_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector2_.h>
#include <Modloader/app/structs/Polygon_ShapeData.h>
#endif
#undef IL2CPP_STRUCT_Polygon_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Polygon_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Polygon_1__Fields_FWDDECL)
#include <Modloader/app/structs/Polygon_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Polygon_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
