#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GridObject_Mode__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GridObject_Mode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_GridObject_Mode__Enum_DEFINED)
#define IL2CPP_STRUCT_GridObject_Mode__Enum_DEFINED
enum class GridObject_Mode__Enum : int32_t {
    DragSizeScaleAbsolute = 0x00000000,
    DragSizeScale = 0x00000001,
    DragSizeScaleFlipped = 0x00000002,
    Position = 0x00000003,
    Fill = 0x00000004,
    SurfaceCollider = 0x00000005,
    Plane = 0x00000006,
    KillPlayerSurfaceCollider = 0x00000007,
    AudioFill = 0x00000008,
    BackgroundFill = 0x00000009,
    PassthroughPlatform = 0x0000000a,
    ClimbableSurface = 0x0000000b,
};
#endif
#if !defined(IL2CPP_STRUCT_GridObject_Mode__Enum_FWDDECL)
#define IL2CPP_STRUCT_GridObject_Mode__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_GridObject_Mode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_GridObject_Mode__Enum_DEFINED) && !defined(IL2CPP_STRUCT_GridObject_Mode__Enum_FWDDECL)
#include <Modloader/app/structs/GridObject_Mode__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GridObject_Mode__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
