#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScreenSpaceReflection__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScreenSpaceReflection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenSpaceReflection__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/ScreenSpaceReflection_SSRSettings.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_ScreenSpaceReflection_SSRSettings_DEFINED)
#define IL2CPP_STRUCT_ScreenSpaceReflection__Fields_DEFINED
struct Shader;
struct Material;
struct Camera;
struct CommandBuffer;
struct ScreenSpaceReflection__Fields {
    struct MonoBehaviour__Fields _;
    struct ScreenSpaceReflection_SSRSettings settings;
    bool highlightSuppression;
    bool traceBehindObjects;
    bool treatBackfaceHitAsMiss;
    bool bilateralUpsample;
    struct Shader* m_Shader;
    struct Material* m_Material;
    struct Camera* m_Camera;
    struct CommandBuffer* m_CommandBuffer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScreenSpaceReflection__Fields_FWDDECL)
#define IL2CPP_STRUCT_ScreenSpaceReflection__Fields_FWDDECL
#include <Modloader/app/structs/Camera.h>
#include <Modloader/app/structs/CommandBuffer.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Shader.h>
#endif
#undef IL2CPP_STRUCT_ScreenSpaceReflection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenSpaceReflection__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ScreenSpaceReflection__Fields_FWDDECL)
#include <Modloader/app/structs/ScreenSpaceReflection__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScreenSpaceReflection__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
