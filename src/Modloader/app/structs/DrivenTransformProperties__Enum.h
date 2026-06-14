#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DrivenTransformProperties__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DrivenTransformProperties__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_DrivenTransformProperties__Enum_DEFINED)
#define IL2CPP_STRUCT_DrivenTransformProperties__Enum_DEFINED
enum class DrivenTransformProperties__Enum : int32_t {
    None = 0x00000000,
    All = -1,
    AnchoredPositionX = 0x00000002,
    AnchoredPositionY = 0x00000004,
    AnchoredPositionZ = 0x00000008,
    Rotation = 0x00000010,
    ScaleX = 0x00000020,
    ScaleY = 0x00000040,
    ScaleZ = 0x00000080,
    AnchorMinX = 0x00000100,
    AnchorMinY = 0x00000200,
    AnchorMaxX = 0x00000400,
    AnchorMaxY = 0x00000800,
    SizeDeltaX = 0x00001000,
    SizeDeltaY = 0x00002000,
    PivotX = 0x00004000,
    PivotY = 0x00008000,
    AnchoredPosition = 0x00000006,
    AnchoredPosition3D = 0x0000000e,
    Scale = 0x000000e0,
    AnchorMin = 0x00000300,
    AnchorMax = 0x00000c00,
    Anchors = 0x00000f00,
    SizeDelta = 0x00003000,
    Pivot = 0x0000c000,
};
#endif
#if !defined(IL2CPP_STRUCT_DrivenTransformProperties__Enum_FWDDECL)
#define IL2CPP_STRUCT_DrivenTransformProperties__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_DrivenTransformProperties__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_DrivenTransformProperties__Enum_DEFINED) && !defined(IL2CPP_STRUCT_DrivenTransformProperties__Enum_FWDDECL)
#include <Modloader/app/structs/DrivenTransformProperties__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DrivenTransformProperties__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
