#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberWaterReflectionView_ViewCamInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberWaterReflectionView_ViewCamInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterReflectionView_ViewCamInfo_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/DrawRendererSortMode__Enum.h>
#include <Modloader/app/structs/Matrix4x4.h>
#include <Modloader/app/structs/RenderQueueRange.h>
#include <Modloader/app/structs/SortFlags__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Matrix4x4_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED) && defined(IL2CPP_STRUCT_SortFlags__Enum_DEFINED) && defined(IL2CPP_STRUCT_DrawRendererSortMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_RenderQueueRange_DEFINED)
#define IL2CPP_STRUCT_UberWaterReflectionView_ViewCamInfo_DEFINED
struct UberWaterReflectionView_ViewCamInfo {
    struct Vector3 pos;
    struct Vector3 euler;
    struct Matrix4x4 viewMatrix;
    struct Matrix4x4 projectionMatrix;
    struct Color backgroundColor;
    SortFlags__Enum sortFlags;

    DrawRendererSortMode__Enum sortMode;

    struct Vector3 cameraCustomSortAxis;
    struct RenderQueueRange renderQueueRange;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberWaterReflectionView_ViewCamInfo_FWDDECL)
#define IL2CPP_STRUCT_UberWaterReflectionView_ViewCamInfo_FWDDECL
#endif
#undef IL2CPP_STRUCT_UberWaterReflectionView_ViewCamInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterReflectionView_ViewCamInfo_DEFINED) && !defined(IL2CPP_STRUCT_UberWaterReflectionView_ViewCamInfo_FWDDECL)
#include <Modloader/app/structs/UberWaterReflectionView_ViewCamInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberWaterReflectionView_ViewCamInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
