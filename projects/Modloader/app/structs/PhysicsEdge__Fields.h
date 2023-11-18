#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PhysicsEdge__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PhysicsEdge__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsEdge__Fields_DEFINED)
#include <Modloader/app/structs/SkinningEdge__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_SkinningEdge__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_PhysicsEdge__Fields_DEFINED
struct CageStructureTool_Edge;
struct PhysicsEdge_EdgeTurbulence;
struct PhysicsEdge_EdgeSoftInteraction;
struct PhysicsEdge__Fields {
    struct SkinningEdge__Fields _;
    struct CageStructureTool_Edge* tempEdge;
    bool useCapsuleCollider;
    bool useHinge;
    bool usePositionSpring;
    bool useWorldSpring;
    bool useHingeSpring;
    struct Vector3 intialPosition;
    float radius;
    bool useGravity;
    bool lockRotation;
    bool lockPosition;
    float length;
    float mass;
    float inertia;
    float drag;
    float angularDrag;
    bool goThrough;
    float hingeAngleLimit;
    float hingeSpring;
    float hingeDamper;
    float positionLimit;
    float positionSpring;
    float positionDamper;
    bool lockHorizontalMovement;
    bool allowExternalAttachments;
    bool useAngularDriveSpring;
    float angularDriveSpring;
    float angularDriveDamper;
    struct PhysicsEdge_EdgeTurbulence* turbulence;
    struct PhysicsEdge_EdgeSoftInteraction* softIntearction;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PhysicsEdge__Fields_FWDDECL)
#define IL2CPP_STRUCT_PhysicsEdge__Fields_FWDDECL
#include <Modloader/app/structs/CageStructureTool_Edge.h>
#include <Modloader/app/structs/PhysicsEdge_EdgeSoftInteraction.h>
#include <Modloader/app/structs/PhysicsEdge_EdgeTurbulence.h>
#endif
#undef IL2CPP_STRUCT_PhysicsEdge__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsEdge__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PhysicsEdge__Fields_FWDDECL)
#include <Modloader/app/structs/PhysicsEdge__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PhysicsEdge__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
