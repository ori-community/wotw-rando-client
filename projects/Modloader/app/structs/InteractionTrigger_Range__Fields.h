#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InteractionTrigger_Range__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InteractionTrigger_Range__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionTrigger_Range__Fields_DEFINED)
#define IL2CPP_STRUCT_InteractionTrigger_Range__Fields_DEFINED
struct String;
struct InteractionTrigger_CharacterPosition;
struct InteractionTrigger_CameraPosition;
struct InteractionTrigger_Range_Interaction__Array;
struct __declspec(align(8)) InteractionTrigger_Range__Fields {
    struct String* name;
    bool show;
    struct InteractionTrigger_CharacterPosition* characterPosition;
    struct InteractionTrigger_CameraPosition* cameraPosition;
    struct InteractionTrigger_Range_Interaction__Array* interactions;
};
#endif
#if !defined(IL2CPP_STRUCT_InteractionTrigger_Range__Fields_FWDDECL)
#define IL2CPP_STRUCT_InteractionTrigger_Range__Fields_FWDDECL
#include <Modloader/app/structs/InteractionTrigger_CameraPosition.h>
#include <Modloader/app/structs/InteractionTrigger_CharacterPosition.h>
#include <Modloader/app/structs/InteractionTrigger_Range_Interaction__Array.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_InteractionTrigger_Range__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionTrigger_Range__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InteractionTrigger_Range__Fields_FWDDECL)
#include <Modloader/app/structs/InteractionTrigger_Range__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InteractionTrigger_Range__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
