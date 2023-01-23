#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InteractionSystemTestGUI__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InteractionSystemTestGUI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionSystemTestGUI__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_InteractionSystemTestGUI__Fields_DEFINED
struct InteractionObject;
struct FullBodyBipedEffector__Enum__Array;
struct InteractionSystem;
struct InteractionSystemTestGUI__Fields {
    struct MonoBehaviour__Fields _;
    struct InteractionObject* interactionObject;
    struct FullBodyBipedEffector__Enum__Array* effectors;
    struct InteractionSystem* interactionSystem;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InteractionSystemTestGUI__Fields_FWDDECL)
#define IL2CPP_STRUCT_InteractionSystemTestGUI__Fields_FWDDECL
#include <Modloader/app/structs/FullBodyBipedEffector__Enum__Array.h>
#include <Modloader/app/structs/InteractionObject.h>
#include <Modloader/app/structs/InteractionSystem.h>
#endif
#undef IL2CPP_STRUCT_InteractionSystemTestGUI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionSystemTestGUI__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InteractionSystemTestGUI__Fields_FWDDECL)
#include <Modloader/app/structs/InteractionSystemTestGUI__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InteractionSystemTestGUI__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
