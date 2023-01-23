#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InteractionTarget_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InteractionTarget_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionTarget_DEFINED)
#include <Modloader/app/structs/InteractionTarget__Fields.h>
#if defined(IL2CPP_STRUCT_InteractionTarget__Fields_DEFINED)
#define IL2CPP_STRUCT_InteractionTarget_DEFINED
struct InteractionTarget__Class;
struct InteractionTarget {
    struct InteractionTarget__Class* klass;
    MonitorData* monitor;
    struct InteractionTarget__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InteractionTarget_FWDDECL)
#define IL2CPP_STRUCT_InteractionTarget_FWDDECL
#include <Modloader/app/structs/InteractionTarget__Class.h>
#endif
#undef IL2CPP_STRUCT_InteractionTarget_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionTarget_DEFINED) && !defined(IL2CPP_STRUCT_InteractionTarget_FWDDECL)
#include <Modloader/app/structs/InteractionTarget.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InteractionTarget.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
