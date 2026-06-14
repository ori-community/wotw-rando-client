#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DrawRendererSortSettingsRaw_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DrawRendererSortSettingsRaw_INITIALIZING
#if !defined(IL2CPP_STRUCT_DrawRendererSortSettingsRaw_DEFINED)
#include <Modloader/app/structs/DrawRendererSortSettings.h>
#include <Modloader/app/structs/Matrix4x4.h>
#include <Modloader/app/structs/SortFlags__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_DrawRendererSortSettings_DEFINED) && defined(IL2CPP_STRUCT_Matrix4x4_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_SortFlags__Enum_DEFINED)
#define IL2CPP_STRUCT_DrawRendererSortSettingsRaw_DEFINED
struct DrawRendererSortSettingsRaw {
    struct DrawRendererSortSettings source;
    struct Matrix4x4 worldToCameraMatrix;
    struct Vector3 cameraPosition;
    SortFlags__Enum flags;

    int32_t _sortOrthographic;
    struct Matrix4x4 _previousVPMatrix;
    struct Matrix4x4 _nonJitteredVPMatrix;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DrawRendererSortSettingsRaw_FWDDECL)
#define IL2CPP_STRUCT_DrawRendererSortSettingsRaw_FWDDECL
#endif
#undef IL2CPP_STRUCT_DrawRendererSortSettingsRaw_INITIALIZING
#if !defined(IL2CPP_STRUCT_DrawRendererSortSettingsRaw_DEFINED) && !defined(IL2CPP_STRUCT_DrawRendererSortSettingsRaw_FWDDECL)
#include <Modloader/app/structs/DrawRendererSortSettingsRaw.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DrawRendererSortSettingsRaw.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
