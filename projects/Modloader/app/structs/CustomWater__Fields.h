#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CustomWater__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CustomWater__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CustomWater__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_CustomWater__Fields_DEFINED
struct Camera;
struct RenderTexture;
struct CustomWater__Fields {
    struct MonoBehaviour__Fields _;
    struct Camera* reflectionCamera;
    struct RenderTexture* reflectionRenderTexture;
    struct Vector2 uvOffset;
    float textureSizeMultiplier;
    float clipPlaneOffset;
    float wavesSize;
    float wavesHeight;
    float wavesSpeed;
    bool m_insideWater;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CustomWater__Fields_FWDDECL)
#define IL2CPP_STRUCT_CustomWater__Fields_FWDDECL
#include <Modloader/app/structs/Camera.h>
#include <Modloader/app/structs/RenderTexture.h>
#endif
#undef IL2CPP_STRUCT_CustomWater__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CustomWater__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CustomWater__Fields_FWDDECL)
#include <Modloader/app/structs/CustomWater__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CustomWater__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
