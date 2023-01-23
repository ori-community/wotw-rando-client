#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InteractionObject_InteractionEvent__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InteractionObject_InteractionEvent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionObject_InteractionEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_InteractionObject_InteractionEvent__Fields_DEFINED
struct InteractionObject_AnimatorEvent__Array;
struct InteractionObject_Message__Array;
struct __declspec(align(8)) InteractionObject_InteractionEvent__Fields {
    float time;
    bool pause;
    bool pickUp;
    struct InteractionObject_AnimatorEvent__Array* animations;
    struct InteractionObject_Message__Array* messages;
};
#endif
#if !defined(IL2CPP_STRUCT_InteractionObject_InteractionEvent__Fields_FWDDECL)
#define IL2CPP_STRUCT_InteractionObject_InteractionEvent__Fields_FWDDECL
#include <Modloader/app/structs/InteractionObject_AnimatorEvent__Array.h>
#include <Modloader/app/structs/InteractionObject_Message__Array.h>
#endif
#undef IL2CPP_STRUCT_InteractionObject_InteractionEvent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionObject_InteractionEvent__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InteractionObject_InteractionEvent__Fields_FWDDECL)
#include <Modloader/app/structs/InteractionObject_InteractionEvent__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InteractionObject_InteractionEvent__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
