#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GridLayoutGroup__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GridLayoutGroup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GridLayoutGroup__Fields_DEFINED)
#include <Modloader/app/structs/GridLayoutGroup_Axis__Enum.h>
#include <Modloader/app/structs/GridLayoutGroup_Constraint__Enum.h>
#include <Modloader/app/structs/GridLayoutGroup_Corner__Enum.h>
#include <Modloader/app/structs/LayoutGroup__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_LayoutGroup__Fields_DEFINED) && defined(IL2CPP_STRUCT_GridLayoutGroup_Corner__Enum_DEFINED) && defined(IL2CPP_STRUCT_GridLayoutGroup_Axis__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_GridLayoutGroup_Constraint__Enum_DEFINED)
#define IL2CPP_STRUCT_GridLayoutGroup__Fields_DEFINED
struct GridLayoutGroup__Fields {
    struct LayoutGroup__Fields _;
    GridLayoutGroup_Corner__Enum m_StartCorner;

    GridLayoutGroup_Axis__Enum m_StartAxis;

    struct Vector2 m_CellSize;
    struct Vector2 m_Spacing;
    GridLayoutGroup_Constraint__Enum m_Constraint;

    int32_t m_ConstraintCount;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GridLayoutGroup__Fields_FWDDECL)
#define IL2CPP_STRUCT_GridLayoutGroup__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_GridLayoutGroup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GridLayoutGroup__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GridLayoutGroup__Fields_FWDDECL)
#include <Modloader/app/structs/GridLayoutGroup__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GridLayoutGroup__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
