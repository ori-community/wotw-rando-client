#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WandererInteractionBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WandererInteractionBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_WandererInteractionBehaviour_DEFINED)
#include <Modloader/app/structs/WandererInteractionBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_WandererInteractionBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_WandererInteractionBehaviour_DEFINED
struct WandererInteractionBehaviour__Class;
struct WandererInteractionBehaviour {
    struct WandererInteractionBehaviour__Class* klass;
    MonitorData* monitor;
    struct WandererInteractionBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WandererInteractionBehaviour_FWDDECL)
#define IL2CPP_STRUCT_WandererInteractionBehaviour_FWDDECL
#include <Modloader/app/structs/WandererInteractionBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_WandererInteractionBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_WandererInteractionBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_WandererInteractionBehaviour_FWDDECL)
#include <Modloader/app/structs/WandererInteractionBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WandererInteractionBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
