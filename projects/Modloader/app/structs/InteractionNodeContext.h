#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InteractionNodeContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InteractionNodeContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionNodeContext_DEFINED)
#include <Modloader/app/structs/InteractionNodeContext__Fields.h>
#if defined(IL2CPP_STRUCT_InteractionNodeContext__Fields_DEFINED)
#define IL2CPP_STRUCT_InteractionNodeContext_DEFINED
struct InteractionNodeContext__Class;
struct InteractionNodeContext {
    struct InteractionNodeContext__Class* klass;
    MonitorData* monitor;
    struct InteractionNodeContext__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InteractionNodeContext_FWDDECL)
#define IL2CPP_STRUCT_InteractionNodeContext_FWDDECL
#include <Modloader/app/structs/InteractionNodeContext__Class.h>
#endif
#undef IL2CPP_STRUCT_InteractionNodeContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionNodeContext_DEFINED) && !defined(IL2CPP_STRUCT_InteractionNodeContext_FWDDECL)
#include <Modloader/app/structs/InteractionNodeContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InteractionNodeContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
