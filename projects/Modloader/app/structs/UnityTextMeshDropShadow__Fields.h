#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnityTextMeshDropShadow__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnityTextMeshDropShadow__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityTextMeshDropShadow__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_UnityTextMeshDropShadow__Fields_DEFINED
struct GameObject;
struct TextMesh;
struct MeshRenderer;
struct Transform;
struct Renderer;
struct UnityTextMeshDropShadow__Fields {
    struct MonoBehaviour__Fields _;
    struct Vector3 Offset;
    struct Color Color;
    struct GameObject* m_shadowGameObject;
    struct TextMesh* m_shadowTextMesh;
    struct MeshRenderer* m_shadowMeshRenderer;
    struct Transform* m_transform;
    struct TextMesh* m_textMesh;
    struct Renderer* m_renderer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UnityTextMeshDropShadow__Fields_FWDDECL)
#define IL2CPP_STRUCT_UnityTextMeshDropShadow__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MeshRenderer.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/TextMesh.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_UnityTextMeshDropShadow__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityTextMeshDropShadow__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UnityTextMeshDropShadow__Fields_FWDDECL)
#include <Modloader/app/structs/UnityTextMeshDropShadow__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnityTextMeshDropShadow__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
