#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ThreadInterruptedException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ThreadInterruptedException_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadInterruptedException_DEFINED)
#include <Modloader/app/structs/ThreadInterruptedException__Fields.h>
#if defined(IL2CPP_STRUCT_ThreadInterruptedException__Fields_DEFINED)
#define IL2CPP_STRUCT_ThreadInterruptedException_DEFINED
struct ThreadInterruptedException__Class;
struct ThreadInterruptedException {
    struct ThreadInterruptedException__Class* klass;
    MonitorData* monitor;
    struct ThreadInterruptedException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ThreadInterruptedException_FWDDECL)
#define IL2CPP_STRUCT_ThreadInterruptedException_FWDDECL
#include <Modloader/app/structs/ThreadInterruptedException__Class.h>
#endif
#undef IL2CPP_STRUCT_ThreadInterruptedException_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadInterruptedException_DEFINED) && !defined(IL2CPP_STRUCT_ThreadInterruptedException_FWDDECL)
#include <Modloader/app/structs/ThreadInterruptedException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ThreadInterruptedException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
