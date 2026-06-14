#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberWaterReflectionView__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberWaterReflectionView__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterReflectionView__StaticFields_DEFINED)
#include <Modloader/app/structs/ShaderPassName.h>
#if defined(IL2CPP_STRUCT_ShaderPassName_DEFINED)
#define IL2CPP_STRUCT_UberWaterReflectionView__StaticFields_DEFINED
struct Camera;
struct Transform;
struct Material;
struct UberWaterReflectionView__StaticFields {
    struct ShaderPassName passObject;
    struct Camera* reflectionCam;
    struct Transform* reflectionCamTransform;
    struct Material* m_blurMaterial;
    int32_t blurRT;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberWaterReflectionView__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_UberWaterReflectionView__StaticFields_FWDDECL
#include <Modloader/app/structs/Camera.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_UberWaterReflectionView__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterReflectionView__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_UberWaterReflectionView__StaticFields_FWDDECL)
#include <Modloader/app/structs/UberWaterReflectionView__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberWaterReflectionView__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
