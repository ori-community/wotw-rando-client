#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RecordEntry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RecordEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecordEntry__Fields_DEFINED)
#include <Modloader/app/structs/Entity_EntityVitalState__Enum.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED) && defined(IL2CPP_STRUCT_Entity_EntityVitalState__Enum_DEFINED)
#define IL2CPP_STRUCT_RecordEntry__Fields_DEFINED
struct String;
struct List_1_PhysicsDebugTools_VelocityChangeEntry_;
struct __declspec(align(8)) RecordEntry__Fields {
    int32_t FrameNo;
    struct Vector3 Position;
    struct Quaternion Rotation;
    float CapsuleHeight;
    float CapsuleRadius;
    struct Vector3 RBVelocity;
    struct Vector3 PlatformingVelocity;
    Entity_EntityVitalState__Enum VitalState;

    struct Vector3 ExternalForces;
    struct String* ExternalForcesSummary;
    struct List_1_PhysicsDebugTools_VelocityChangeEntry_* ChangeEntries;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RecordEntry__Fields_FWDDECL)
#define IL2CPP_STRUCT_RecordEntry__Fields_FWDDECL
#include <Modloader/app/structs/List_1_PhysicsDebugTools_VelocityChangeEntry_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_RecordEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecordEntry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RecordEntry__Fields_FWDDECL)
#include <Modloader/app/structs/RecordEntry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RecordEntry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
