#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderTextureBase__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderTextureBase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderTextureBase__Fields_DEFINED)
#include <Modloader/app/structs/ProjectionAxis__Enum.h>
#include <Modloader/app/structs/TextureUvMode__Enum.h>
#include <Modloader/app/structs/UberShaderProperty__Fields.h>
#include <Modloader/app/structs/UberShaderTextureBase_SubBindIdCache.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector4.h>
#if defined(IL2CPP_STRUCT_UberShaderProperty__Fields_DEFINED) && defined(IL2CPP_STRUCT_TextureUvMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_ProjectionAxis__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Vector4_DEFINED) && defined(IL2CPP_STRUCT_UberShaderTextureBase_SubBindIdCache_DEFINED)
#define IL2CPP_STRUCT_UberShaderTextureBase__Fields_DEFINED
struct Transform;
struct UberShaderTextureBase__Fields {
    struct UberShaderProperty__Fields _;
    TextureUvMode__Enum UvMode;

    ProjectionAxis__Enum WorldProjectionAxis;

    bool IsPolarUvs;
    bool DoParralax;
    bool IsCubemap;
    float ParralaxAmount;
    struct Transform* Anchor;
    struct Transform* LookAtTarget;
    struct Vector2 AnchorOffset;
    float RotationOffset;
    bool LockToAnchorX;
    bool LockToAnchorY;
    bool LockToAnchorRotation;
    bool UpdateInEditor;
    bool DisableBinding;
    struct Vector4 PolarUvSettings;
    struct Vector2 ProTextureScale;
    struct Vector2 ProTextureScroll;
    struct Vector2 ProTextureScrollMultiplier;
    struct Vector2 ProTextureOffset;
    float ProTextureRotation;
    float ProTextureRotationSpeed;
    struct UberShaderTextureBase_SubBindIdCache SubBindID;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberShaderTextureBase__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberShaderTextureBase__Fields_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_UberShaderTextureBase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderTextureBase__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderTextureBase__Fields_FWDDECL)
#include <Modloader/app/structs/UberShaderTextureBase__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderTextureBase__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
