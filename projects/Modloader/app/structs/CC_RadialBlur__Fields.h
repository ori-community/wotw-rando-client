#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CC_RadialBlur__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CC_RadialBlur__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CC_RadialBlur__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_CC_RadialBlur__Fields_DEFINED
struct Shader;
struct Material;
struct CC_RadialBlur__Fields {
    struct MonoBehaviour__Fields _;
    float amount;
    struct Vector2 center;
    int32_t quality;
    struct Shader* shaderLow;
    struct Shader* shaderMed;
    struct Shader* shaderHigh;
    struct Shader* _currentShader;
    struct Material* _material;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CC_RadialBlur__Fields_FWDDECL)
#define IL2CPP_STRUCT_CC_RadialBlur__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Shader.h>
#endif
#undef IL2CPP_STRUCT_CC_RadialBlur__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CC_RadialBlur__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CC_RadialBlur__Fields_FWDDECL)
#include <Modloader/app/structs/CC_RadialBlur__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CC_RadialBlur__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
