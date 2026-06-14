#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Benchmark_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Benchmark_INITIALIZING
#if !defined(IL2CPP_STRUCT_Benchmark_DEFINED)
#include <Modloader/app/structs/Benchmark__Fields.h>
#if defined(IL2CPP_STRUCT_Benchmark__Fields_DEFINED)
#define IL2CPP_STRUCT_Benchmark_DEFINED
struct Benchmark__Class;
struct Benchmark {
    struct Benchmark__Class* klass;
    MonitorData* monitor;
    struct Benchmark__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Benchmark_FWDDECL)
#define IL2CPP_STRUCT_Benchmark_FWDDECL
#include <Modloader/app/structs/Benchmark__Class.h>
#endif
#undef IL2CPP_STRUCT_Benchmark_INITIALIZING
#if !defined(IL2CPP_STRUCT_Benchmark_DEFINED) && !defined(IL2CPP_STRUCT_Benchmark_FWDDECL)
#include <Modloader/app/structs/Benchmark.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Benchmark.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
