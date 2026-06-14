#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InteractionLookAt_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InteractionLookAt_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionLookAt_DEFINED)
#include <Modloader/app/structs/InteractionLookAt__Fields.h>
#if defined(IL2CPP_STRUCT_InteractionLookAt__Fields_DEFINED)
#define IL2CPP_STRUCT_InteractionLookAt_DEFINED
struct InteractionLookAt__Class;
struct InteractionLookAt {
    struct InteractionLookAt__Class* klass;
    MonitorData* monitor;
    struct InteractionLookAt__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InteractionLookAt_FWDDECL)
#define IL2CPP_STRUCT_InteractionLookAt_FWDDECL
#include <Modloader/app/structs/InteractionLookAt__Class.h>
#endif
#undef IL2CPP_STRUCT_InteractionLookAt_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionLookAt_DEFINED) && !defined(IL2CPP_STRUCT_InteractionLookAt_FWDDECL)
#include <Modloader/app/structs/InteractionLookAt.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InteractionLookAt.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
