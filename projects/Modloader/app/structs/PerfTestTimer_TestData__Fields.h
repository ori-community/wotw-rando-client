#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PerfTestTimer_TestData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PerfTestTimer_TestData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PerfTestTimer_TestData__Fields_DEFINED)
#include <Modloader/app/structs/TimeSpan.h>
#if defined(IL2CPP_STRUCT_TimeSpan_DEFINED)
#define IL2CPP_STRUCT_PerfTestTimer_TestData__Fields_DEFINED
struct String;
struct __declspec(align(8)) PerfTestTimer_TestData__Fields {
    struct String* Name;
    struct TimeSpan TestTime;
    struct TimeSpan GcTime;
    int64_t MonoMemoryGcChange;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PerfTestTimer_TestData__Fields_FWDDECL)
#define IL2CPP_STRUCT_PerfTestTimer_TestData__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_PerfTestTimer_TestData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PerfTestTimer_TestData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PerfTestTimer_TestData__Fields_FWDDECL)
#include <Modloader/app/structs/PerfTestTimer_TestData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PerfTestTimer_TestData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
