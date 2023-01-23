#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InteractionC2CDemo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InteractionC2CDemo_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionC2CDemo_DEFINED)
#include <Modloader/app/structs/InteractionC2CDemo__Fields.h>
#if defined(IL2CPP_STRUCT_InteractionC2CDemo__Fields_DEFINED)
#define IL2CPP_STRUCT_InteractionC2CDemo_DEFINED
struct InteractionC2CDemo__Class;
struct InteractionC2CDemo {
    struct InteractionC2CDemo__Class* klass;
    MonitorData* monitor;
    struct InteractionC2CDemo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InteractionC2CDemo_FWDDECL)
#define IL2CPP_STRUCT_InteractionC2CDemo_FWDDECL
#include <Modloader/app/structs/InteractionC2CDemo__Class.h>
#endif
#undef IL2CPP_STRUCT_InteractionC2CDemo_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionC2CDemo_DEFINED) && !defined(IL2CPP_STRUCT_InteractionC2CDemo_FWDDECL)
#include <Modloader/app/structs/InteractionC2CDemo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InteractionC2CDemo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
