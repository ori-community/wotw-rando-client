#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberWaterTop__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberWaterTop__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterTop__Fields_DEFINED)
#include <Modloader/app/structs/UberWaterComponent__Fields.h>
#include <Modloader/app/structs/UberWaterReflectionView_UpdateMode__Enum.h>
#if defined(IL2CPP_STRUCT_UberWaterComponent__Fields_DEFINED) && defined(IL2CPP_STRUCT_UberWaterReflectionView_UpdateMode__Enum_DEFINED)
#define IL2CPP_STRUCT_UberWaterTop__Fields_DEFINED
struct Material;
struct Mesh;
struct Renderer;
struct UberWaterReflectionGroup;
struct UberWaterReflectionPlane;
struct UberWaterTop__Fields {
    struct UberWaterComponent__Fields _;
    bool Blur;
    float BlurSize;
    struct Material* TopWaterMat;
    bool UseQuadSubdivisionNew;
    int32_t SubdivisionResolution;
    float SliceOverdrawAmount;
    struct Mesh* m_normalMesh;
    struct Renderer* m_renderer;
    struct UberWaterReflectionGroup* group;
    bool allowAutomaticGrouping;
    UberWaterReflectionView_UpdateMode__Enum updateMode;

    struct UberWaterReflectionPlane* m_reflectionPlane;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberWaterTop__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberWaterTop__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Mesh.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/UberWaterReflectionGroup.h>
#include <Modloader/app/structs/UberWaterReflectionPlane.h>
#endif
#undef IL2CPP_STRUCT_UberWaterTop__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterTop__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberWaterTop__Fields_FWDDECL)
#include <Modloader/app/structs/UberWaterTop__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberWaterTop__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
