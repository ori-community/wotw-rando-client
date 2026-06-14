#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ISubsystem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ISubsystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISubsystem_DEFINED)
#define IL2CPP_STRUCT_ISubsystem_DEFINED
struct ISubsystem__Class;
struct ISubsystem {
    struct ISubsystem__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ISubsystem_FWDDECL)
#define IL2CPP_STRUCT_ISubsystem_FWDDECL
#include <Modloader/app/structs/ISubsystem__Class.h>
#endif
#undef IL2CPP_STRUCT_ISubsystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISubsystem_DEFINED) && !defined(IL2CPP_STRUCT_ISubsystem_FWDDECL)
#include <Modloader/app/structs/ISubsystem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ISubsystem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
