#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DrawRendererSortSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DrawRendererSortSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_DrawRendererSortSettings_DEFINED)
#include <Modloader/app/structs/DrawRendererSortMode__Enum.h>
#include <Modloader/app/structs/Matrix4x4.h>
#include <Modloader/app/structs/SortFlags__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Matrix4x4_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_SortFlags__Enum_DEFINED) && defined(IL2CPP_STRUCT_DrawRendererSortMode__Enum_DEFINED)
#define IL2CPP_STRUCT_DrawRendererSortSettings_DEFINED
struct DrawRendererSortSettings {
    struct Matrix4x4 worldToCameraMatrix;
    struct Vector3 cameraPosition;
    struct Vector3 cameraCustomSortAxis;
    SortFlags__Enum flags;

    DrawRendererSortMode__Enum sortMode;

    struct Matrix4x4 _previousVPMatrix;
    struct Matrix4x4 _nonJitteredVPMatrix;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DrawRendererSortSettings_FWDDECL)
#define IL2CPP_STRUCT_DrawRendererSortSettings_FWDDECL
#endif
#undef IL2CPP_STRUCT_DrawRendererSortSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_DrawRendererSortSettings_DEFINED) && !defined(IL2CPP_STRUCT_DrawRendererSortSettings_FWDDECL)
#include <Modloader/app/structs/DrawRendererSortSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DrawRendererSortSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
