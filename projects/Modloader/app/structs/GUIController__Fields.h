#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GUIController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GUIController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUIController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_GUIController__Fields_DEFINED
struct CCText;
struct GUIController_FontPackage__Array;
struct CCTextModifier__Array;
struct Shader__Array;
struct CCGradient__Array;
struct String__Array;
struct Texture2D__Array;
struct Material;
struct Transform;
struct StringBuilder;
struct GUIController__Fields {
    struct MonoBehaviour__Fields _;
    struct CCText* text;
    struct GUIController_FontPackage__Array* fontPackages;
    struct CCTextModifier__Array* modifiers;
    struct Shader__Array* shaders;
    struct CCGradient__Array* gradients;
    int32_t selectedContent;
    int32_t selectedAlignment;
    int32_t selectedFont;
    int32_t selectedShader;
    int32_t selectedGradient;
    int32_t selectedModifier;
    bool useDistanceMap;
    float scale;
    float width;
    struct String__Array* fontOptions;
    struct Texture2D__Array* gradientMaps;
    struct Material* textMaterial;
    struct Transform* textTransform;
    struct Vector3 rotation;
    struct StringBuilder* stringBuilder;
    float alphaBoundary;
    float edgeMin;
    float edgeMax;
    float outlineMin;
    float outlineMax;
    float shadowMin;
    float shadowMax;
    float shadowOffsetU;
    float shadowOffsetV;
    float fadeDistance;
    float fadeStrength;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GUIController__Fields_FWDDECL)
#define IL2CPP_STRUCT_GUIController__Fields_FWDDECL
#include <Modloader/app/structs/CCGradient__Array.h>
#include <Modloader/app/structs/CCText.h>
#include <Modloader/app/structs/CCTextModifier__Array.h>
#include <Modloader/app/structs/GUIController_FontPackage__Array.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Shader__Array.h>
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/Texture2D__Array.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_GUIController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUIController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GUIController__Fields_FWDDECL)
#include <Modloader/app/structs/GUIController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GUIController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
