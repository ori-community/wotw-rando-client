#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InteractionDemo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InteractionDemo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionDemo__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_InteractionDemo__Fields_DEFINED
struct InteractionSystem;
struct InteractionObject;
struct InteractionDemo__Fields {
    struct MonoBehaviour__Fields _;
    struct InteractionSystem* interactionSystem;
    bool interrupt;
    struct InteractionObject* ball;
    struct InteractionObject* benchMain;
    struct InteractionObject* benchHands;
    struct InteractionObject* button;
    struct InteractionObject* cigarette;
    struct InteractionObject* door;
    bool isSitting;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InteractionDemo__Fields_FWDDECL)
#define IL2CPP_STRUCT_InteractionDemo__Fields_FWDDECL
#include <Modloader/app/structs/InteractionObject.h>
#include <Modloader/app/structs/InteractionSystem.h>
#endif
#undef IL2CPP_STRUCT_InteractionDemo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionDemo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InteractionDemo__Fields_FWDDECL)
#include <Modloader/app/structs/InteractionDemo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InteractionDemo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
