#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextureOffsetModifier__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextureOffsetModifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextureOffsetModifier__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_TextureOffsetModifier__Fields_DEFINED
struct Renderer;
struct Transform;
struct Material;
struct TextureOffsetModifier__Fields {
    struct MonoBehaviour__Fields _;
    struct Renderer* TargetRenderer;
    struct Vector2 speed;
    struct Vector2 autoScrollSpeed;
    struct Transform* OffsetByDistanceTarget;
    struct Transform* BlockingCreep;
    struct Transform* OffsetByRotationZ;
    struct Vector3 m_intialPosition;
    struct Material* m_material;
    int32_t m_textureID;
    struct Vector2 m_shift;
    float m_targetRotationZ;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextureOffsetModifier__Fields_FWDDECL)
#define IL2CPP_STRUCT_TextureOffsetModifier__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_TextureOffsetModifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextureOffsetModifier__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TextureOffsetModifier__Fields_FWDDECL)
#include <Modloader/app/structs/TextureOffsetModifier__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextureOffsetModifier__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
