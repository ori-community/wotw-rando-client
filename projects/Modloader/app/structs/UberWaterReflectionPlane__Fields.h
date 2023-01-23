#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberWaterReflectionPlane__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberWaterReflectionPlane__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterReflectionPlane__Fields_DEFINED)
#include <Modloader/app/structs/UberWaterReflectionView_PlaneGroupInfo.h>
#if defined(IL2CPP_STRUCT_UberWaterReflectionView_PlaneGroupInfo_DEFINED)
#define IL2CPP_STRUCT_UberWaterReflectionPlane__Fields_DEFINED
struct UberWaterTop;
struct Transform;
struct Renderer;
struct Material;
struct __declspec(align(8)) UberWaterReflectionPlane__Fields {
    struct UberWaterTop* component;
    struct Transform* transform;
    struct Renderer* renderer;
    struct Material* sharedMaterial;
    struct UberWaterReflectionView_PlaneGroupInfo group;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberWaterReflectionPlane__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberWaterReflectionPlane__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/UberWaterTop.h>
#endif
#undef IL2CPP_STRUCT_UberWaterReflectionPlane__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterReflectionPlane__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberWaterReflectionPlane__Fields_FWDDECL)
#include <Modloader/app/structs/UberWaterReflectionPlane__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberWaterReflectionPlane__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
