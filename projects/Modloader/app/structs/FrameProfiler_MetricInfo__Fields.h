#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FrameProfiler_MetricInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FrameProfiler_MetricInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameProfiler_MetricInfo__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Metric__Enum.h>
#if defined(IL2CPP_STRUCT_Metric__Enum_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_FrameProfiler_MetricInfo__Fields_DEFINED
struct String;
struct __declspec(align(8)) FrameProfiler_MetricInfo__Fields {
    Metric__Enum Metric;

    struct String* ShortName;
    struct Color Color;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FrameProfiler_MetricInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_FrameProfiler_MetricInfo__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_FrameProfiler_MetricInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameProfiler_MetricInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FrameProfiler_MetricInfo__Fields_FWDDECL)
#include <Modloader/app/structs/FrameProfiler_MetricInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FrameProfiler_MetricInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
