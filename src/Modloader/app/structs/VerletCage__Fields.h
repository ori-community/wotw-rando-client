#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VerletCage__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VerletCage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletCage__Fields_DEFINED)
#include <Modloader/app/structs/CageStructureTool__Fields.h>
#if defined(IL2CPP_STRUCT_CageStructureTool__Fields_DEFINED)
#define IL2CPP_STRUCT_VerletCage__Fields_DEFINED
struct MeshFilter;
struct Transform;
struct VerletEdgeMetaData;
struct VerletVertexMetaData;
struct List_1_VerletSkinning2DModifier_;
struct List_1_VerletSkinning3DModifier_;
struct AnimationCurve;
struct VerletCage__Fields {
    struct CageStructureTool__Fields _;
    struct MeshFilter* verletMesh;
    struct Transform* attachToSystem;
    struct VerletEdgeMetaData* edgeMetadata;
    struct VerletVertexMetaData* vertexMetadata;
    struct List_1_VerletSkinning2DModifier_* skinning2DModifiers;
    struct List_1_VerletSkinning3DModifier_* skinning3DModifiers;
    bool generateAngularConstraints;
    float angularConstraintThreshold;
    float angularConstraintForce;
    bool LockAttachmentAnchors;
    struct AnimationCurve* ChainAlignmentCurve;
    struct AnimationCurve* ChainMassCurve;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VerletCage__Fields_FWDDECL)
#define IL2CPP_STRUCT_VerletCage__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/List_1_VerletSkinning2DModifier_.h>
#include <Modloader/app/structs/List_1_VerletSkinning3DModifier_.h>
#include <Modloader/app/structs/MeshFilter.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/VerletEdgeMetaData.h>
#include <Modloader/app/structs/VerletVertexMetaData.h>
#endif
#undef IL2CPP_STRUCT_VerletCage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletCage__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VerletCage__Fields_FWDDECL)
#include <Modloader/app/structs/VerletCage__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VerletCage__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
