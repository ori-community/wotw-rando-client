#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CustomizeMaterial__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CustomizeMaterial__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CustomizeMaterial__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_CustomizeMaterial__Fields_DEFINED
struct Material;
struct OverridableShaderProperty;
struct List_1_OverridableTextureProperty_;
struct List_1_OverridableFloatProperty_;
struct List_1_OverridableColorProperty_;
struct Transform;
struct Texture;
struct GameObject;
struct CustomizeMaterial__Fields {
    struct MonoBehaviour__Fields _;
    struct Material* OriginalMaterial;
    int32_t MaterialIndex;
    struct Material* InstancedMaterial;
    bool IsInstancedMaterialPersistent;
    float m_intrinsicOffset;
    struct OverridableShaderProperty* Shader;
    struct List_1_OverridableTextureProperty_* TexturePropertiesList;
    struct List_1_OverridableFloatProperty_* FloatPropertiesList;
    struct List_1_OverridableColorProperty_* ColorPropertiesList;
    bool SpecifyRenderQueue;
    int32_t RenderQueue;
    float OffsetPositionZ;
    struct Vector2 BlurScale;
    bool m_needsRefreshing;
    float m_oldZ;
    struct Vector3 m_oldScale;
    struct Transform* m_transform;
    struct Texture* _LastMainTexture_k__BackingField;
    int32_t m_lastLayer;
    int32_t m_forceUpdate;
    struct GameObject* m_gameObject;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CustomizeMaterial__Fields_FWDDECL)
#define IL2CPP_STRUCT_CustomizeMaterial__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_OverridableColorProperty_.h>
#include <Modloader/app/structs/List_1_OverridableFloatProperty_.h>
#include <Modloader/app/structs/List_1_OverridableTextureProperty_.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/OverridableShaderProperty.h>
#include <Modloader/app/structs/Texture.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_CustomizeMaterial__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CustomizeMaterial__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CustomizeMaterial__Fields_FWDDECL)
#include <Modloader/app/structs/CustomizeMaterial__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CustomizeMaterial__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
