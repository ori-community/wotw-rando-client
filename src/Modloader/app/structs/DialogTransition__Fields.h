#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DialogTransition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DialogTransition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DialogTransition__Fields_DEFINED)
#define IL2CPP_STRUCT_DialogTransition__Fields_DEFINED
struct DialogNode;
struct __declspec(align(8)) DialogTransition__Fields {
    struct DialogNode* Destination;
};
#endif
#if !defined(IL2CPP_STRUCT_DialogTransition__Fields_FWDDECL)
#define IL2CPP_STRUCT_DialogTransition__Fields_FWDDECL
#include <Modloader/app/structs/DialogNode.h>
#endif
#undef IL2CPP_STRUCT_DialogTransition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DialogTransition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DialogTransition__Fields_FWDDECL)
#include <Modloader/app/structs/DialogTransition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DialogTransition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
