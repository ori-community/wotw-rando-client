#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PositionInBoxColliderCondition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PositionInBoxColliderCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PositionInBoxColliderCondition__Fields_DEFINED)
#include <Modloader/app/structs/Condition__Fields.h>
#if defined(IL2CPP_STRUCT_Condition__Fields_DEFINED)
#define IL2CPP_STRUCT_PositionInBoxColliderCondition__Fields_DEFINED
struct MoonVector3;
struct BoxCollider;
struct PositionInBoxColliderCondition__Fields {
    struct Condition__Fields _;
    struct MoonVector3* Target;
    struct BoxCollider* Collider;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PositionInBoxColliderCondition__Fields_FWDDECL)
#define IL2CPP_STRUCT_PositionInBoxColliderCondition__Fields_FWDDECL
#include <Modloader/app/structs/BoxCollider.h>
#include <Modloader/app/structs/MoonVector3.h>
#endif
#undef IL2CPP_STRUCT_PositionInBoxColliderCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PositionInBoxColliderCondition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PositionInBoxColliderCondition__Fields_FWDDECL)
#include <Modloader/app/structs/PositionInBoxColliderCondition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PositionInBoxColliderCondition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
