#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IInteractionActor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IInteractionActor_INITIALIZING
#if !defined(IL2CPP_STRUCT_IInteractionActor_DEFINED)
#define IL2CPP_STRUCT_IInteractionActor_DEFINED
struct IInteractionActor__Class;
struct IInteractionActor {
    struct IInteractionActor__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IInteractionActor_FWDDECL)
#define IL2CPP_STRUCT_IInteractionActor_FWDDECL
#include <Modloader/app/structs/IInteractionActor__Class.h>
#endif
#undef IL2CPP_STRUCT_IInteractionActor_INITIALIZING
#if !defined(IL2CPP_STRUCT_IInteractionActor_DEFINED) && !defined(IL2CPP_STRUCT_IInteractionActor_FWDDECL)
#include <Modloader/app/structs/IInteractionActor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IInteractionActor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
