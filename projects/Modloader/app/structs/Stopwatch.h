#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Stopwatch_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Stopwatch_INITIALIZING
#if !defined(IL2CPP_STRUCT_Stopwatch_DEFINED)
#include <Modloader/app/structs/Stopwatch__Fields.h>
#if defined(IL2CPP_STRUCT_Stopwatch__Fields_DEFINED)
#define IL2CPP_STRUCT_Stopwatch_DEFINED
struct Stopwatch__Class;
struct Stopwatch {
    struct Stopwatch__Class* klass;
    MonitorData* monitor;
    struct Stopwatch__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Stopwatch_FWDDECL)
#define IL2CPP_STRUCT_Stopwatch_FWDDECL
#include <Modloader/app/structs/Stopwatch__Class.h>
#endif
#undef IL2CPP_STRUCT_Stopwatch_INITIALIZING
#if !defined(IL2CPP_STRUCT_Stopwatch_DEFINED) && !defined(IL2CPP_STRUCT_Stopwatch_FWDDECL)
#include <Modloader/app/structs/Stopwatch.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Stopwatch.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
