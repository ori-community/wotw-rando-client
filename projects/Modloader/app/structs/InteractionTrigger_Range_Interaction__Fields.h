#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InteractionTrigger_Range_Interaction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InteractionTrigger_Range_Interaction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionTrigger_Range_Interaction__Fields_DEFINED)
#define IL2CPP_STRUCT_InteractionTrigger_Range_Interaction__Fields_DEFINED
struct InteractionObject;
struct FullBodyBipedEffector__Enum__Array;
struct __declspec(align(8)) InteractionTrigger_Range_Interaction__Fields {
    struct InteractionObject* interactionObject;
    struct FullBodyBipedEffector__Enum__Array* effectors;
};
#endif
#if !defined(IL2CPP_STRUCT_InteractionTrigger_Range_Interaction__Fields_FWDDECL)
#define IL2CPP_STRUCT_InteractionTrigger_Range_Interaction__Fields_FWDDECL
#include <Modloader/app/structs/FullBodyBipedEffector__Enum__Array.h>
#include <Modloader/app/structs/InteractionObject.h>
#endif
#undef IL2CPP_STRUCT_InteractionTrigger_Range_Interaction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionTrigger_Range_Interaction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InteractionTrigger_Range_Interaction__Fields_FWDDECL)
#include <Modloader/app/structs/InteractionTrigger_Range_Interaction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InteractionTrigger_Range_Interaction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
