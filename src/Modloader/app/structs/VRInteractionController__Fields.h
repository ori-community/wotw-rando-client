#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VRInteractionController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VRInteractionController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VRInteractionController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_VRInteractionController__Fields_DEFINED
struct InteractionSystem;
struct InteractionTrigger;
struct VRInteractionController__Fields {
    struct MonoBehaviour__Fields _;
    float triggerTime;
    struct InteractionSystem* _interactionSystem_k__BackingField;
    struct InteractionTrigger* _currentTrigger_k__BackingField;
    float timer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VRInteractionController__Fields_FWDDECL)
#define IL2CPP_STRUCT_VRInteractionController__Fields_FWDDECL
#include <Modloader/app/structs/InteractionSystem.h>
#include <Modloader/app/structs/InteractionTrigger.h>
#endif
#undef IL2CPP_STRUCT_VRInteractionController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VRInteractionController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VRInteractionController__Fields_FWDDECL)
#include <Modloader/app/structs/VRInteractionController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VRInteractionController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
