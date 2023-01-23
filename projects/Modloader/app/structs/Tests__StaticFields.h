#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Tests__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Tests__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Tests__StaticFields_DEFINED)
#define IL2CPP_STRUCT_Tests__StaticFields_DEFINED
struct PerfTestTimer__Array;
struct Tests__StaticFields {
    struct PerfTestTimer__Array* FunctionPerfTestTimers;
};
#endif
#if !defined(IL2CPP_STRUCT_Tests__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Tests__StaticFields_FWDDECL
#include <Modloader/app/structs/PerfTestTimer__Array.h>
#endif
#undef IL2CPP_STRUCT_Tests__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Tests__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Tests__StaticFields_FWDDECL)
#include <Modloader/app/structs/Tests__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Tests__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
