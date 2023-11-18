#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EdgeDetection__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EdgeDetection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EdgeDetection__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/EdgeDetection_EdgeDetectMode__Enum.h>
#include <Modloader/app/structs/PostEffectsBase__Fields.h>
#if defined(IL2CPP_STRUCT_PostEffectsBase__Fields_DEFINED) && defined(IL2CPP_STRUCT_EdgeDetection_EdgeDetectMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_EdgeDetection__Fields_DEFINED
struct Shader;
struct Material;
struct EdgeDetection__Fields {
    struct PostEffectsBase__Fields _;
    EdgeDetection_EdgeDetectMode__Enum mode;

    float sensitivityDepth;
    float sensitivityNormals;
    float lumThreshold;
    float edgeExp;
    float sampleDist;
    float edgesOnly;
    struct Color edgesOnlyBgColor;
    struct Shader* edgeDetectShader;
    struct Material* edgeDetectMaterial;
    EdgeDetection_EdgeDetectMode__Enum oldMode;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EdgeDetection__Fields_FWDDECL)
#define IL2CPP_STRUCT_EdgeDetection__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Shader.h>
#endif
#undef IL2CPP_STRUCT_EdgeDetection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EdgeDetection__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EdgeDetection__Fields_FWDDECL)
#include <Modloader/app/structs/EdgeDetection__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EdgeDetection__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
