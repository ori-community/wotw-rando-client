#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SimpleNavigationAgent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SimpleNavigationAgent_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleNavigationAgent_DEFINED)
#include <Modloader/app/structs/SimpleNavigationAgent__Fields.h>
#if defined(IL2CPP_STRUCT_SimpleNavigationAgent__Fields_DEFINED)
#define IL2CPP_STRUCT_SimpleNavigationAgent_DEFINED
struct SimpleNavigationAgent__Class;
struct SimpleNavigationAgent {
    struct SimpleNavigationAgent__Class* klass;
    MonitorData* monitor;
    struct SimpleNavigationAgent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SimpleNavigationAgent_FWDDECL)
#define IL2CPP_STRUCT_SimpleNavigationAgent_FWDDECL
#include <Modloader/app/structs/SimpleNavigationAgent__Class.h>
#endif
#undef IL2CPP_STRUCT_SimpleNavigationAgent_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleNavigationAgent_DEFINED) && !defined(IL2CPP_STRUCT_SimpleNavigationAgent_FWDDECL)
#include <Modloader/app/structs/SimpleNavigationAgent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SimpleNavigationAgent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
