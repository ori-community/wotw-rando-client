#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderRuntimeAnchoredTexture__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderRuntimeAnchoredTexture__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderRuntimeAnchoredTexture__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/ProjectionAxis__Enum.h>
#include <Modloader/app/structs/UberShaderProperty_Texture__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_UberShaderProperty_Texture__Enum_DEFINED) && defined(IL2CPP_STRUCT_ProjectionAxis__Enum_DEFINED)
#define IL2CPP_STRUCT_UberShaderRuntimeAnchoredTexture__Fields_DEFINED
struct Transform;
struct Renderer;
struct UberShaderRuntimeAnchoredTexture__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform* Anchor;
    struct Transform* LookAtTarget;
    float RotationOffset;
    struct Vector2 AnchorOffset;
    UberShaderProperty_Texture__Enum TextureProperty;

    ProjectionAxis__Enum ProjectionAxis;

    struct Renderer* Renderer;
    bool LockToAnchorRotation;
    bool _HasAnchor_k__BackingField;
    bool _HasLookAtTarget_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberShaderRuntimeAnchoredTexture__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberShaderRuntimeAnchoredTexture__Fields_FWDDECL
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_UberShaderRuntimeAnchoredTexture__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderRuntimeAnchoredTexture__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderRuntimeAnchoredTexture__Fields_FWDDECL)
#include <Modloader/app/structs/UberShaderRuntimeAnchoredTexture__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderRuntimeAnchoredTexture__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
