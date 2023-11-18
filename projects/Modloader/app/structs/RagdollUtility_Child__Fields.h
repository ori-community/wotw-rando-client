#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RagdollUtility_Child__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RagdollUtility_Child__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RagdollUtility_Child__Fields_DEFINED)
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_RagdollUtility_Child__Fields_DEFINED
struct Transform;
struct __declspec(align(8)) RagdollUtility_Child__Fields {
    struct Transform* t;
    struct Vector3 localPosition;
    struct Quaternion localRotation;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RagdollUtility_Child__Fields_FWDDECL)
#define IL2CPP_STRUCT_RagdollUtility_Child__Fields_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_RagdollUtility_Child__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RagdollUtility_Child__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RagdollUtility_Child__Fields_FWDDECL)
#include <Modloader/app/structs/RagdollUtility_Child__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RagdollUtility_Child__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
