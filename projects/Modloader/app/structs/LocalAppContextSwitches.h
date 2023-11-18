#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LocalAppContextSwitches_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LocalAppContextSwitches_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocalAppContextSwitches_DEFINED)
#define IL2CPP_STRUCT_LocalAppContextSwitches_DEFINED
struct LocalAppContextSwitches__Class;
struct LocalAppContextSwitches {
    struct LocalAppContextSwitches__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_LocalAppContextSwitches_FWDDECL)
#define IL2CPP_STRUCT_LocalAppContextSwitches_FWDDECL
#include <Modloader/app/structs/LocalAppContextSwitches__Class.h>
#endif
#undef IL2CPP_STRUCT_LocalAppContextSwitches_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocalAppContextSwitches_DEFINED) && !defined(IL2CPP_STRUCT_LocalAppContextSwitches_FWDDECL)
#include <Modloader/app/structs/LocalAppContextSwitches.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LocalAppContextSwitches.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
