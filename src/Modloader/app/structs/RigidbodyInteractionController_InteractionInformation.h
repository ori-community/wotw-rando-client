#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RigidbodyInteractionController_InteractionInformation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RigidbodyInteractionController_InteractionInformation_INITIALIZING
#if !defined(IL2CPP_STRUCT_RigidbodyInteractionController_InteractionInformation_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_RigidbodyInteractionController_InteractionInformation_DEFINED
struct RigidbodyInteractionController_InteractionInformation {
    struct Vector3 Normal;
    struct Vector3 Point;
    struct Vector3 RelativeVelocity;
    bool IsPlayer;
    int32_t Layer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RigidbodyInteractionController_InteractionInformation_FWDDECL)
#define IL2CPP_STRUCT_RigidbodyInteractionController_InteractionInformation_FWDDECL
#endif
#undef IL2CPP_STRUCT_RigidbodyInteractionController_InteractionInformation_INITIALIZING
#if !defined(IL2CPP_STRUCT_RigidbodyInteractionController_InteractionInformation_DEFINED) && !defined(IL2CPP_STRUCT_RigidbodyInteractionController_InteractionInformation_FWDDECL)
#include <Modloader/app/structs/RigidbodyInteractionController_InteractionInformation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RigidbodyInteractionController_InteractionInformation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
