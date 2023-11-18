#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugRendererSettings_SettingsPattern__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugRendererSettings_SettingsPattern__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugRendererSettings_SettingsPattern__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/LayerMask.h>
#if defined(IL2CPP_STRUCT_Color_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED)
#define IL2CPP_STRUCT_DebugRendererSettings_SettingsPattern__Fields_DEFINED
struct Material;
struct __declspec(align(8)) DebugRendererSettings_SettingsPattern__Fields {
    bool EnabledFromStart;
    bool SceneBounds;
    struct Color SceneBoundsColor;
    bool ScenePaddingBoundaries;
    struct Color ScenePaddingBoundariesColor;
    float ScenePaddingBoundariesBorder;
    bool SceneLoadingBoundaries;
    struct Color SceneLoadingBoundariesColor;
    bool Colliders;
    struct Color CollidersColor;
    bool TriggerColliders;
    struct Color TriggerCollidersColor;
    bool DisabledColliders;
    bool DamageColliders;
    struct Color DamageCollidersColor;
    struct LayerMask DamageColliderLayerMask;
    bool InvisibleCheckpoints;
    struct Color InvisibleCheckpointsColor;
    struct Color InvisibleRespawnPointColor;
    bool SolidsColliders;
    struct Color SolidsCollidersColor;
    bool SeinCharacterColliders;
    struct Color SeinCharacterCollidersColor;
    bool Rigidbodies;
    struct Color RigidbodyWithColliderColor;
    struct Color RigidbodyWithoutColliderColor;
    bool EarlyZObjects;
    struct Color EarlyZObjectsColor;
    bool Verlet;
    struct Color VerletColor;
    bool Legend;
    struct Material* WireframeMaterial;
    struct Material* TransparentColorMaterial;
    struct Material* GLMaterial;
    struct Color SceneBoundsFillColor;
    struct Color ScenePaddingBoundariesFillColor;
    struct Color DisabledCollidersColor;
    struct Color DisabledTriggerCollidersColor;
    struct Color InvisibleCheckpointsFillColor;
    struct Color InvisibleRespawnPointFillColor;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DebugRendererSettings_SettingsPattern__Fields_FWDDECL)
#define IL2CPP_STRUCT_DebugRendererSettings_SettingsPattern__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#endif
#undef IL2CPP_STRUCT_DebugRendererSettings_SettingsPattern__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugRendererSettings_SettingsPattern__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DebugRendererSettings_SettingsPattern__Fields_FWDDECL)
#include <Modloader/app/structs/DebugRendererSettings_SettingsPattern__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugRendererSettings_SettingsPattern__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
