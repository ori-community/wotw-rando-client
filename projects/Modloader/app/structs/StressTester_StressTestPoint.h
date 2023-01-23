#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StressTester_StressTestPoint_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StressTester_StressTestPoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_StressTester_StressTestPoint_DEFINED)
#include <Modloader/app/structs/StressTester_StressTestPoint__Fields.h>
#if defined(IL2CPP_STRUCT_StressTester_StressTestPoint__Fields_DEFINED)
#define IL2CPP_STRUCT_StressTester_StressTestPoint_DEFINED
struct StressTester_StressTestPoint__Class;
struct StressTester_StressTestPoint {
    struct StressTester_StressTestPoint__Class* klass;
    MonitorData* monitor;
    struct StressTester_StressTestPoint__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StressTester_StressTestPoint_FWDDECL)
#define IL2CPP_STRUCT_StressTester_StressTestPoint_FWDDECL
#include <Modloader/app/structs/StressTester_StressTestPoint__Class.h>
#endif
#undef IL2CPP_STRUCT_StressTester_StressTestPoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_StressTester_StressTestPoint_DEFINED) && !defined(IL2CPP_STRUCT_StressTester_StressTestPoint_FWDDECL)
#include <Modloader/app/structs/StressTester_StressTestPoint.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StressTester_StressTestPoint.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
