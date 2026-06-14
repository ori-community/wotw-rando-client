#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StressTestRunHelper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StressTestRunHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_StressTestRunHelper_DEFINED)
#define IL2CPP_STRUCT_StressTestRunHelper_DEFINED
struct StressTestRunHelper__Class;
struct StressTestRunHelper {
    struct StressTestRunHelper__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_StressTestRunHelper_FWDDECL)
#define IL2CPP_STRUCT_StressTestRunHelper_FWDDECL
#include <Modloader/app/structs/StressTestRunHelper__Class.h>
#endif
#undef IL2CPP_STRUCT_StressTestRunHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_StressTestRunHelper_DEFINED) && !defined(IL2CPP_STRUCT_StressTestRunHelper_FWDDECL)
#include <Modloader/app/structs/StressTestRunHelper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StressTestRunHelper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
