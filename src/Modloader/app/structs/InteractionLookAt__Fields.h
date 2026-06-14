#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InteractionLookAt__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InteractionLookAt__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionLookAt__Fields_DEFINED)
#define IL2CPP_STRUCT_InteractionLookAt__Fields_DEFINED
struct LookAtIK;
struct Transform;
struct __declspec(align(8)) InteractionLookAt__Fields {
    struct LookAtIK* ik;
    float lerpSpeed;
    float weightSpeed;
    bool isPaused;
    struct Transform* lookAtTarget;
    float stopLookTime;
    float weight;
    bool firstFBBIKSolve;
};
#endif
#if !defined(IL2CPP_STRUCT_InteractionLookAt__Fields_FWDDECL)
#define IL2CPP_STRUCT_InteractionLookAt__Fields_FWDDECL
#include <Modloader/app/structs/LookAtIK.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_InteractionLookAt__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionLookAt__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InteractionLookAt__Fields_FWDDECL)
#include <Modloader/app/structs/InteractionLookAt__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InteractionLookAt__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
