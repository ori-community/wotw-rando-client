#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InteractionEffector_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InteractionEffector_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionEffector_DEFINED)
#include <Modloader/app/structs/InteractionEffector__Fields.h>
#if defined(IL2CPP_STRUCT_InteractionEffector__Fields_DEFINED)
#define IL2CPP_STRUCT_InteractionEffector_DEFINED
struct InteractionEffector__Class;
struct InteractionEffector {
    struct InteractionEffector__Class* klass;
    MonitorData* monitor;
    struct InteractionEffector__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InteractionEffector_FWDDECL)
#define IL2CPP_STRUCT_InteractionEffector_FWDDECL
#include <Modloader/app/structs/InteractionEffector__Class.h>
#endif
#undef IL2CPP_STRUCT_InteractionEffector_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionEffector_DEFINED) && !defined(IL2CPP_STRUCT_InteractionEffector_FWDDECL)
#include <Modloader/app/structs/InteractionEffector.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InteractionEffector.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
