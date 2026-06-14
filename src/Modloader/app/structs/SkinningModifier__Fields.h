#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SkinningModifier__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SkinningModifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkinningModifier__Fields_DEFINED)
#include <Modloader/app/structs/Matrix4x4.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/UberShaderModifier__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_UberShaderModifier__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Matrix4x4_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_SkinningModifier__Fields_DEFINED
struct Transform__Array;
struct Vector4__Array;
struct Material;
struct Transform;
struct PhysicalSystemState;
struct SkinningModifier__Fields {
    struct UberShaderModifier__Fields _;
    struct Transform__Array* bones;
    struct Vector4__Array* m_bonePositions;
    struct Vector4__Array* m_boneInitialPositions;
    struct Vector4__Array* m_boneInitialPositionsCopy;
    int32_t m_intialBonePositionsID;
    int32_t m_bonePositionsID;
    int32_t m_skinningIntensityID;
    bool m_positionsInitialised;
    struct Vector3 m_initialPosition;
    struct Material* m_oldMaterial;
    bool m_isSuspended;
    struct Transform* m_transform;
    struct Matrix4x4 m_initialLocalTransformMatrix;
    struct Matrix4x4 m_initialTransformMatrix;
    struct PhysicalSystemState* InitialState;
    bool m_initialized;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SkinningModifier__Fields_FWDDECL)
#define IL2CPP_STRUCT_SkinningModifier__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/PhysicalSystemState.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Transform__Array.h>
#include <Modloader/app/structs/Vector4__Array.h>
#endif
#undef IL2CPP_STRUCT_SkinningModifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkinningModifier__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SkinningModifier__Fields_FWDDECL)
#include <Modloader/app/structs/SkinningModifier__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SkinningModifier__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
