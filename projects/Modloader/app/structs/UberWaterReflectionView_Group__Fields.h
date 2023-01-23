#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberWaterReflectionView_Group__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberWaterReflectionView_Group__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterReflectionView_Group__Fields_DEFINED)
#include <Modloader/app/structs/UberWaterReflectionView_UpdateMode__Enum.h>
#include <Modloader/app/structs/Vector4.h>
#if defined(IL2CPP_STRUCT_Vector4_DEFINED) && defined(IL2CPP_STRUCT_UberWaterReflectionView_UpdateMode__Enum_DEFINED)
#define IL2CPP_STRUCT_UberWaterReflectionView_Group__Fields_DEFINED
struct List_1_UberWaterReflectionPlane_;
struct RenderTexture;
struct __declspec(align(8)) UberWaterReflectionView_Group__Fields {
    struct List_1_UberWaterReflectionPlane_* visiblePlanes;
    struct RenderTexture* texture;
    struct Vector4 lastUVScale;
    struct Vector4 lastUVMaxRegion;
    float lastVisibleTime;
    UberWaterReflectionView_UpdateMode__Enum updateMode;

    int32_t lastRenderedFrame;
    int32_t frameDelta;
    int32_t debugId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberWaterReflectionView_Group__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberWaterReflectionView_Group__Fields_FWDDECL
#include <Modloader/app/structs/List_1_UberWaterReflectionPlane_.h>
#include <Modloader/app/structs/RenderTexture.h>
#endif
#undef IL2CPP_STRUCT_UberWaterReflectionView_Group__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterReflectionView_Group__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberWaterReflectionView_Group__Fields_FWDDECL)
#include <Modloader/app/structs/UberWaterReflectionView_Group__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberWaterReflectionView_Group__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
