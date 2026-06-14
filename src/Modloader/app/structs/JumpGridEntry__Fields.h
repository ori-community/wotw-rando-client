#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JumpGridEntry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JumpGridEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JumpGridEntry__Fields_DEFINED)
#include <Modloader/app/structs/JumpGridEntry_CellTag__Enum.h>
#include <Modloader/app/structs/Rect.h>
#if defined(IL2CPP_STRUCT_JumpGridEntry_CellTag__Enum_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED)
#define IL2CPP_STRUCT_JumpGridEntry__Fields_DEFINED
struct String;
struct Vector2__Array;
struct __declspec(align(8)) JumpGridEntry__Fields {
    struct String* CellName;
    JumpGridEntry_CellTag__Enum Tag;

    int32_t jumpNumber;
    struct Rect m_gridCell;
    struct Rect m_flipedRect;
    bool m_flipedRectCalculated;
    struct Vector2__Array* m_flipedCurvePoints;
    bool m_flipedPointsCalculated;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JumpGridEntry__Fields_FWDDECL)
#define IL2CPP_STRUCT_JumpGridEntry__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Vector2__Array.h>
#endif
#undef IL2CPP_STRUCT_JumpGridEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JumpGridEntry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_JumpGridEntry__Fields_FWDDECL)
#include <Modloader/app/structs/JumpGridEntry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JumpGridEntry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
