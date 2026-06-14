#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BipedReferences__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BipedReferences__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BipedReferences__Fields_DEFINED)
#define IL2CPP_STRUCT_BipedReferences__Fields_DEFINED
struct Transform;
struct Transform__Array;
struct __declspec(align(8)) BipedReferences__Fields {
    struct Transform* root;
    struct Transform* pelvis;
    struct Transform* leftThigh;
    struct Transform* leftCalf;
    struct Transform* leftFoot;
    struct Transform* rightThigh;
    struct Transform* rightCalf;
    struct Transform* rightFoot;
    struct Transform* leftUpperArm;
    struct Transform* leftForearm;
    struct Transform* leftHand;
    struct Transform* rightUpperArm;
    struct Transform* rightForearm;
    struct Transform* rightHand;
    struct Transform* head;
    struct Transform__Array* spine;
    struct Transform__Array* eyes;
};
#endif
#if !defined(IL2CPP_STRUCT_BipedReferences__Fields_FWDDECL)
#define IL2CPP_STRUCT_BipedReferences__Fields_FWDDECL
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Transform__Array.h>
#endif
#undef IL2CPP_STRUCT_BipedReferences__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BipedReferences__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BipedReferences__Fields_FWDDECL)
#include <Modloader/app/structs/BipedReferences__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BipedReferences__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
