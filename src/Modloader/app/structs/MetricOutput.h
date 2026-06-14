#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MetricOutput_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MetricOutput_INITIALIZING
#if !defined(IL2CPP_STRUCT_MetricOutput_DEFINED)
#include <Modloader/app/structs/Metric__Enum.h>
#include <Modloader/app/structs/Presentation__Enum.h>
#if defined(IL2CPP_STRUCT_Metric__Enum_DEFINED) && defined(IL2CPP_STRUCT_Presentation__Enum_DEFINED)
#define IL2CPP_STRUCT_MetricOutput_DEFINED
struct String;
struct MetricOutput {
    Metric__Enum metric;

    Presentation__Enum presentation;

    struct String* name;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MetricOutput_FWDDECL)
#define IL2CPP_STRUCT_MetricOutput_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_MetricOutput_INITIALIZING
#if !defined(IL2CPP_STRUCT_MetricOutput_DEFINED) && !defined(IL2CPP_STRUCT_MetricOutput_FWDDECL)
#include <Modloader/app/structs/MetricOutput.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MetricOutput.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
