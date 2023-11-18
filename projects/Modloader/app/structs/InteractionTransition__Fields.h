#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InteractionTransition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InteractionTransition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionTransition__Fields_DEFINED)
#define IL2CPP_STRUCT_InteractionTransition__Fields_DEFINED
struct MessageNode;
struct __declspec(align(8)) InteractionTransition__Fields {
    struct MessageNode* Destination;
};
#endif
#if !defined(IL2CPP_STRUCT_InteractionTransition__Fields_FWDDECL)
#define IL2CPP_STRUCT_InteractionTransition__Fields_FWDDECL
#include <Modloader/app/structs/MessageNode.h>
#endif
#undef IL2CPP_STRUCT_InteractionTransition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionTransition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InteractionTransition__Fields_FWDDECL)
#include <Modloader/app/structs/InteractionTransition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InteractionTransition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
