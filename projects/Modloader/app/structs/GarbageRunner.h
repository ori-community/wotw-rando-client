#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GarbageRunner_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GarbageRunner_INITIALIZING
#if !defined(IL2CPP_STRUCT_GarbageRunner_DEFINED)
#include <Modloader/app/structs/GarbageRunner__Fields.h>
#if defined(IL2CPP_STRUCT_GarbageRunner__Fields_DEFINED)
#define IL2CPP_STRUCT_GarbageRunner_DEFINED
struct GarbageRunner__Class;
struct GarbageRunner {
    struct GarbageRunner__Class* klass;
    MonitorData* monitor;
    struct GarbageRunner__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GarbageRunner_FWDDECL)
#define IL2CPP_STRUCT_GarbageRunner_FWDDECL
#include <Modloader/app/structs/GarbageRunner__Class.h>
#endif
#undef IL2CPP_STRUCT_GarbageRunner_INITIALIZING
#if !defined(IL2CPP_STRUCT_GarbageRunner_DEFINED) && !defined(IL2CPP_STRUCT_GarbageRunner_FWDDECL)
#include <Modloader/app/structs/GarbageRunner.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GarbageRunner.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
