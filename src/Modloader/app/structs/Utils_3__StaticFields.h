#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Utils_3__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Utils_3__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Utils_3__StaticFields_DEFINED)
#define IL2CPP_STRUCT_Utils_3__StaticFields_DEFINED
struct MetricOutput__Array;
struct Utils_3__StaticFields {
    struct MetricOutput__Array* DefaultProfilerOutput;
    struct MetricOutput__Array* CombatAndStreamingOutput;
    struct MetricOutput__Array* DeltaTimeOutput;
    struct MetricOutput__Array* DebugProfilerOutput;
    struct MetricOutput__Array* FullProfilerOutput;
};
#endif
#if !defined(IL2CPP_STRUCT_Utils_3__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Utils_3__StaticFields_FWDDECL
#include <Modloader/app/structs/MetricOutput__Array.h>
#endif
#undef IL2CPP_STRUCT_Utils_3__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Utils_3__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Utils_3__StaticFields_FWDDECL)
#include <Modloader/app/structs/Utils_3__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Utils_3__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
