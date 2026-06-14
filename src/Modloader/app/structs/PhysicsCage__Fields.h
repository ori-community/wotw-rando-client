#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PhysicsCage__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PhysicsCage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsCage__Fields_DEFINED)
#include <Modloader/app/structs/CageStructureTool__Fields.h>
#include <Modloader/app/structs/RailType__Enum.h>
#if defined(IL2CPP_STRUCT_CageStructureTool__Fields_DEFINED) && defined(IL2CPP_STRUCT_RailType__Enum_DEFINED)
#define IL2CPP_STRUCT_PhysicsCage__Fields_DEFINED
struct PhysicMaterial;
struct PhysicsEdgeMetaData;
struct List_1_SkinningModifier_;
struct PhysicsCage__Fields {
    struct CageStructureTool__Fields _;
    int32_t solverIterations;
    struct PhysicMaterial* physicMaterial;
    float tension;
    struct PhysicsEdgeMetaData* edgeMetadata;
    struct List_1_SkinningModifier_* skinnedSprites;
    bool rail;
    bool railStartActivated;
    RailType__Enum railType;

    float railMaxWidth;
    bool railAllowFlipping;
    bool EditorSpriteMovement;
    bool SegmentPivotAtVertex;
    bool GenerateAngularDriveForWorld;
    bool m_isSuspended;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PhysicsCage__Fields_FWDDECL)
#define IL2CPP_STRUCT_PhysicsCage__Fields_FWDDECL
#include <Modloader/app/structs/List_1_SkinningModifier_.h>
#include <Modloader/app/structs/PhysicMaterial.h>
#include <Modloader/app/structs/PhysicsEdgeMetaData.h>
#endif
#undef IL2CPP_STRUCT_PhysicsCage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsCage__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PhysicsCage__Fields_FWDDECL)
#include <Modloader/app/structs/PhysicsCage__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PhysicsCage__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
