#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FlameExtinguisher_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FlameExtinguisher_INITIALIZING
#if !defined(IL2CPP_STRUCT_FlameExtinguisher_DEFINED)
#include <Modloader/app/structs/FlameExtinguisher__Fields.h>
#if defined(IL2CPP_STRUCT_FlameExtinguisher__Fields_DEFINED)
#define IL2CPP_STRUCT_FlameExtinguisher_DEFINED
struct FlameExtinguisher__Class;
struct FlameExtinguisher {
    struct FlameExtinguisher__Class* klass;
    MonitorData* monitor;
    struct FlameExtinguisher__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FlameExtinguisher_FWDDECL)
#define IL2CPP_STRUCT_FlameExtinguisher_FWDDECL
#include <Modloader/app/structs/FlameExtinguisher__Class.h>
#endif
#undef IL2CPP_STRUCT_FlameExtinguisher_INITIALIZING
#if !defined(IL2CPP_STRUCT_FlameExtinguisher_DEFINED) && !defined(IL2CPP_STRUCT_FlameExtinguisher_FWDDECL)
#include <Modloader/app/structs/FlameExtinguisher.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FlameExtinguisher.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
