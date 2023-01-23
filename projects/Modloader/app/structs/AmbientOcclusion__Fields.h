#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AmbientOcclusion__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AmbientOcclusion__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AmbientOcclusion__Fields_DEFINED)
#include <Modloader/app/structs/AmbientOcclusion_PropertyObserver.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_AmbientOcclusion_PropertyObserver_DEFINED)
#define IL2CPP_STRUCT_AmbientOcclusion__Fields_DEFINED
struct AmbientOcclusion_Settings;
struct Shader;
struct Material;
struct CommandBuffer;
struct Mesh;
struct AmbientOcclusion__Fields {
    struct MonoBehaviour__Fields _;
    struct AmbientOcclusion_Settings* settings;
    struct Shader* _aoShader;
    struct Material* _aoMaterial;
    struct CommandBuffer* _aoCommands;
    struct AmbientOcclusion_PropertyObserver _propertyObserver_k__BackingField;
    struct Mesh* _quadMesh;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AmbientOcclusion__Fields_FWDDECL)
#define IL2CPP_STRUCT_AmbientOcclusion__Fields_FWDDECL
#include <Modloader/app/structs/AmbientOcclusion_Settings.h>
#include <Modloader/app/structs/CommandBuffer.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Mesh.h>
#include <Modloader/app/structs/Shader.h>
#endif
#undef IL2CPP_STRUCT_AmbientOcclusion__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AmbientOcclusion__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AmbientOcclusion__Fields_FWDDECL)
#include <Modloader/app/structs/AmbientOcclusion__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AmbientOcclusion__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
