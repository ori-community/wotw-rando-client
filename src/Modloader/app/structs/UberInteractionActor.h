#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberInteractionActor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberInteractionActor_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberInteractionActor_DEFINED)
#include <Modloader/app/structs/UberInteractionActor__Fields.h>
#if defined(IL2CPP_STRUCT_UberInteractionActor__Fields_DEFINED)
#define IL2CPP_STRUCT_UberInteractionActor_DEFINED
struct UberInteractionActor__Class;
struct UberInteractionActor {
    struct UberInteractionActor__Class* klass;
    MonitorData* monitor;
    struct UberInteractionActor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberInteractionActor_FWDDECL)
#define IL2CPP_STRUCT_UberInteractionActor_FWDDECL
#include <Modloader/app/structs/UberInteractionActor__Class.h>
#endif
#undef IL2CPP_STRUCT_UberInteractionActor_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberInteractionActor_DEFINED) && !defined(IL2CPP_STRUCT_UberInteractionActor_FWDDECL)
#include <Modloader/app/structs/UberInteractionActor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberInteractionActor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
