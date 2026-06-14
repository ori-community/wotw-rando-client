#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ClusterModifier__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ClusterModifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClusterModifier__Fields_DEFINED)
#include <Modloader/app/structs/UberShaderModifier__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_UberShaderModifier__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_ClusterModifier__Fields_DEFINED
struct UberShaderTexture;
struct Transform;
struct ClusterModifier__Fields {
    struct UberShaderModifier__Fields _;
    struct UberShaderTexture* Mask_1;
    struct Transform* Handle;
    struct Vector3 m_posOffset;
    float m_rotOffset;
    float RotationWeight;
    bool m_didRebind;
    int32_t m_varsId;
    int32_t m_pivotId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ClusterModifier__Fields_FWDDECL)
#define IL2CPP_STRUCT_ClusterModifier__Fields_FWDDECL
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/UberShaderTexture.h>
#endif
#undef IL2CPP_STRUCT_ClusterModifier__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClusterModifier__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ClusterModifier__Fields_FWDDECL)
#include <Modloader/app/structs/ClusterModifier__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ClusterModifier__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
