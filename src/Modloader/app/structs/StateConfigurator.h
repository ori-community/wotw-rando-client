#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StateConfigurator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StateConfigurator_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateConfigurator_DEFINED)
#include <Modloader/app/structs/StateConfigurator__Fields.h>
#if defined(IL2CPP_STRUCT_StateConfigurator__Fields_DEFINED)
#define IL2CPP_STRUCT_StateConfigurator_DEFINED
struct StateConfigurator__Class;
struct StateConfigurator {
    struct StateConfigurator__Class* klass;
    MonitorData* monitor;
    struct StateConfigurator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StateConfigurator_FWDDECL)
#define IL2CPP_STRUCT_StateConfigurator_FWDDECL
#include <Modloader/app/structs/StateConfigurator__Class.h>
#endif
#undef IL2CPP_STRUCT_StateConfigurator_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateConfigurator_DEFINED) && !defined(IL2CPP_STRUCT_StateConfigurator_FWDDECL)
#include <Modloader/app/structs/StateConfigurator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StateConfigurator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
