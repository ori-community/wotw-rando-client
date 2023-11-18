#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BaurInteractionBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BaurInteractionBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaurInteractionBehaviour_DEFINED)
#include <Modloader/app/structs/BaurInteractionBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_BaurInteractionBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_BaurInteractionBehaviour_DEFINED
struct BaurInteractionBehaviour__Class;
struct BaurInteractionBehaviour {
    struct BaurInteractionBehaviour__Class* klass;
    MonitorData* monitor;
    struct BaurInteractionBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BaurInteractionBehaviour_FWDDECL)
#define IL2CPP_STRUCT_BaurInteractionBehaviour_FWDDECL
#include <Modloader/app/structs/BaurInteractionBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_BaurInteractionBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaurInteractionBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_BaurInteractionBehaviour_FWDDECL)
#include <Modloader/app/structs/BaurInteractionBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BaurInteractionBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
