#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlatformMovementListOfColliders__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlatformMovementListOfColliders__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlatformMovementListOfColliders__Fields_DEFINED)
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED)
#define IL2CPP_STRUCT_PlatformMovementListOfColliders__Fields_DEFINED
struct PlatformMovement;
struct List_1_UnityEngine_Collider_;
struct PlatformMovementListOfColliders__Fields {
    struct SaveSerialize__Fields _;
    struct PlatformMovement* PlatformMovement;
    struct List_1_UnityEngine_Collider_* GroundColliders;
    struct List_1_UnityEngine_Collider_* CeilingColliders;
    struct List_1_UnityEngine_Collider_* WallLeftColliders;
    struct List_1_UnityEngine_Collider_* WallRightColliders;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlatformMovementListOfColliders__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlatformMovementListOfColliders__Fields_FWDDECL
#include <Modloader/app/structs/List_1_UnityEngine_Collider_.h>
#include <Modloader/app/structs/PlatformMovement.h>
#endif
#undef IL2CPP_STRUCT_PlatformMovementListOfColliders__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlatformMovementListOfColliders__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlatformMovementListOfColliders__Fields_FWDDECL)
#include <Modloader/app/structs/PlatformMovementListOfColliders__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlatformMovementListOfColliders__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
