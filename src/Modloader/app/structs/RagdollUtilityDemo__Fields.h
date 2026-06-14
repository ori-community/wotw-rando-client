#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RagdollUtilityDemo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RagdollUtilityDemo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RagdollUtilityDemo__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_RagdollUtilityDemo__Fields_DEFINED
struct RagdollUtility;
struct Transform;
struct Rigidbody;
struct RagdollUtilityDemo__Fields {
    struct MonoBehaviour__Fields _;
    struct RagdollUtility* ragdollUtility;
    struct Transform* root;
    struct Rigidbody* pelvis;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RagdollUtilityDemo__Fields_FWDDECL)
#define IL2CPP_STRUCT_RagdollUtilityDemo__Fields_FWDDECL
#include <Modloader/app/structs/RagdollUtility.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_RagdollUtilityDemo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RagdollUtilityDemo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RagdollUtilityDemo__Fields_FWDDECL)
#include <Modloader/app/structs/RagdollUtilityDemo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RagdollUtilityDemo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
