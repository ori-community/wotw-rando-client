#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InteractionDemo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InteractionDemo_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionDemo_DEFINED)
#include <Modloader/app/structs/InteractionDemo__Fields.h>
#if defined(IL2CPP_STRUCT_InteractionDemo__Fields_DEFINED)
#define IL2CPP_STRUCT_InteractionDemo_DEFINED
struct InteractionDemo__Class;
struct InteractionDemo {
    struct InteractionDemo__Class* klass;
    MonitorData* monitor;
    struct InteractionDemo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InteractionDemo_FWDDECL)
#define IL2CPP_STRUCT_InteractionDemo_FWDDECL
#include <Modloader/app/structs/InteractionDemo__Class.h>
#endif
#undef IL2CPP_STRUCT_InteractionDemo_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionDemo_DEFINED) && !defined(IL2CPP_STRUCT_InteractionDemo_FWDDECL)
#include <Modloader/app/structs/InteractionDemo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InteractionDemo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
