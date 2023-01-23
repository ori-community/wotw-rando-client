#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PendulumExample_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PendulumExample_INITIALIZING
#if !defined(IL2CPP_STRUCT_PendulumExample_DEFINED)
#include <Modloader/app/structs/PendulumExample__Fields.h>
#if defined(IL2CPP_STRUCT_PendulumExample__Fields_DEFINED)
#define IL2CPP_STRUCT_PendulumExample_DEFINED
struct PendulumExample__Class;
struct PendulumExample {
    struct PendulumExample__Class* klass;
    MonitorData* monitor;
    struct PendulumExample__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PendulumExample_FWDDECL)
#define IL2CPP_STRUCT_PendulumExample_FWDDECL
#include <Modloader/app/structs/PendulumExample__Class.h>
#endif
#undef IL2CPP_STRUCT_PendulumExample_INITIALIZING
#if !defined(IL2CPP_STRUCT_PendulumExample_DEFINED) && !defined(IL2CPP_STRUCT_PendulumExample_FWDDECL)
#include <Modloader/app/structs/PendulumExample.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PendulumExample.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
