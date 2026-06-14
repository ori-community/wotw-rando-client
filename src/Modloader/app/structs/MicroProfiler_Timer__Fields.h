#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MicroProfiler_Timer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MicroProfiler_Timer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MicroProfiler_Timer__Fields_DEFINED)
#define IL2CPP_STRUCT_MicroProfiler_Timer__Fields_DEFINED
struct Stopwatch;
struct __declspec(align(8)) MicroProfiler_Timer__Fields {
    struct Stopwatch* stopwatch;
};
#endif
#if !defined(IL2CPP_STRUCT_MicroProfiler_Timer__Fields_FWDDECL)
#define IL2CPP_STRUCT_MicroProfiler_Timer__Fields_FWDDECL
#include <Modloader/app/structs/Stopwatch.h>
#endif
#undef IL2CPP_STRUCT_MicroProfiler_Timer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MicroProfiler_Timer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MicroProfiler_Timer__Fields_FWDDECL)
#include <Modloader/app/structs/MicroProfiler_Timer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MicroProfiler_Timer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
