#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugRenderer__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugRenderer__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugRenderer__StaticFields_DEFINED)
#include <Modloader/app/structs/RenderingType__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_RenderingType__Enum_DEFINED)
#define IL2CPP_STRUCT_DebugRenderer__StaticFields_DEFINED
struct Material;
struct DebugRenderer;
struct Camera;
struct MoonRenderContext;
struct DebugRenderer__StaticFields {
    struct Vector3 s_boundsMin;
    struct Vector3 s_boundsMax;
    struct Vector3 s_bottomLeft;
    struct Vector3 s_topLeft;
    struct Vector3 s_topRight;
    struct Vector3 s_bottomRight;
    struct Material* s_material;
    struct Material* s_meshMaterial;
    struct Material* s_transparentColorMaterial;
    struct DebugRenderer* s_instance;
    bool s_enabled;
    bool s_didGLBegin;
    int32_t s_curMode;
    struct Camera* s_curCamera;
    struct MoonRenderContext* s_curContext;
    RenderingType__Enum s_curRenderingType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DebugRenderer__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_DebugRenderer__StaticFields_FWDDECL
#include <Modloader/app/structs/Camera.h>
#include <Modloader/app/structs/DebugRenderer.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/MoonRenderContext.h>
#endif
#undef IL2CPP_STRUCT_DebugRenderer__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugRenderer__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_DebugRenderer__StaticFields_FWDDECL)
#include <Modloader/app/structs/DebugRenderer__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugRenderer__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
