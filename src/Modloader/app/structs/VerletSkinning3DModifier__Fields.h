#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VerletSkinning3DModifier__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VerletSkinning3DModifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletSkinning3DModifier__Fields_DEFINED)
#include <Modloader/app/structs/Matrix4x4.h>
#include <Modloader/app/structs/VerletSkinningModifier__Fields.h>
#if defined(IL2CPP_STRUCT_VerletSkinningModifier__Fields_DEFINED) && defined(IL2CPP_STRUCT_Matrix4x4_DEFINED)
#define IL2CPP_STRUCT_VerletSkinning3DModifier__Fields_DEFINED
struct Vector4__Array;
struct SkinnedMeshRenderer;
struct VerletSkinning3DModifier__Fields {
    struct VerletSkinningModifier__Fields _;
    struct Vector4__Array* m_boneTangents;
    struct Vector4__Array* m_boneNormals;
    struct Vector4__Array* m_boneInitialTangents;
    struct Vector4__Array* m_boneInitialNormals;
    bool FixedBasis;
    float ZScaling;
    int32_t m_intialBoneTangentsID;
    int32_t m_intialBoneNormalsID;
    int32_t m_boneTangentsID;
    int32_t m_boneNormalsID;
    int32_t m_SkinningAdditionalScalingID;
    struct SkinnedMeshRenderer* m_skinnedMeshRenderer;
    struct Matrix4x4 m_boneTransformMatrix;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VerletSkinning3DModifier__Fields_FWDDECL)
#define IL2CPP_STRUCT_VerletSkinning3DModifier__Fields_FWDDECL
#include <Modloader/app/structs/SkinnedMeshRenderer.h>
#include <Modloader/app/structs/Vector4__Array.h>
#endif
#undef IL2CPP_STRUCT_VerletSkinning3DModifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletSkinning3DModifier__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VerletSkinning3DModifier__Fields_FWDDECL)
#include <Modloader/app/structs/VerletSkinning3DModifier__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VerletSkinning3DModifier__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
