#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IntegratedSubsystem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IntegratedSubsystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_IntegratedSubsystem_DEFINED)
#include <Modloader/app/structs/IntegratedSubsystem__Fields.h>
#if defined(IL2CPP_STRUCT_IntegratedSubsystem__Fields_DEFINED)
#define IL2CPP_STRUCT_IntegratedSubsystem_DEFINED
struct IntegratedSubsystem__Class;
struct IntegratedSubsystem {
    struct IntegratedSubsystem__Class* klass;
    MonitorData* monitor;
    struct IntegratedSubsystem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IntegratedSubsystem_FWDDECL)
#define IL2CPP_STRUCT_IntegratedSubsystem_FWDDECL
#include <Modloader/app/structs/IntegratedSubsystem__Class.h>
#endif
#undef IL2CPP_STRUCT_IntegratedSubsystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_IntegratedSubsystem_DEFINED) && !defined(IL2CPP_STRUCT_IntegratedSubsystem_FWDDECL)
#include <Modloader/app/structs/IntegratedSubsystem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IntegratedSubsystem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
