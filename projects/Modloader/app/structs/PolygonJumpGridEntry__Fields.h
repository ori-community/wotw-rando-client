#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PolygonJumpGridEntry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PolygonJumpGridEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PolygonJumpGridEntry__Fields_DEFINED)
#include <Modloader/app/structs/PolygonJumpGridEntry_CellTag__Enum.h>
#include <Modloader/app/structs/Rect.h>
#if defined(IL2CPP_STRUCT_PolygonJumpGridEntry_CellTag__Enum_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED)
#define IL2CPP_STRUCT_PolygonJumpGridEntry__Fields_DEFINED
struct String;
struct List_1_UnityEngine_Vector2_;
struct __declspec(align(8)) PolygonJumpGridEntry__Fields {
    struct String* CellName;
    PolygonJumpGridEntry_CellTag__Enum Tag;

    int32_t jumpNumber;
    struct List_1_UnityEngine_Vector2_* points;
    struct Rect boundingBox;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PolygonJumpGridEntry__Fields_FWDDECL)
#define IL2CPP_STRUCT_PolygonJumpGridEntry__Fields_FWDDECL
#include <Modloader/app/structs/List_1_UnityEngine_Vector2_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_PolygonJumpGridEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PolygonJumpGridEntry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PolygonJumpGridEntry__Fields_FWDDECL)
#include <Modloader/app/structs/PolygonJumpGridEntry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PolygonJumpGridEntry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
