#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VerletSoftInteraction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VerletSoftInteraction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletSoftInteraction__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_VerletSoftInteraction__Fields_DEFINED
struct VerletStructure;
struct VerletSoftInteraction__Fields {
    struct MonoBehaviour__Fields _;
    struct VerletStructure* structure;
    float radius;
    float velocityInteractionForce;
    int32_t jointNumber;
    int32_t _Index_k__BackingField;
    bool _IsRegistered_k__BackingField;
    bool _WantsToRegister_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VerletSoftInteraction__Fields_FWDDECL)
#define IL2CPP_STRUCT_VerletSoftInteraction__Fields_FWDDECL
#include <Modloader/app/structs/VerletStructure.h>
#endif
#undef IL2CPP_STRUCT_VerletSoftInteraction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletSoftInteraction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VerletSoftInteraction__Fields_FWDDECL)
#include <Modloader/app/structs/VerletSoftInteraction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VerletSoftInteraction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
