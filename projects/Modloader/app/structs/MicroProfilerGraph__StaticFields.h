#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MicroProfilerGraph__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MicroProfilerGraph__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MicroProfilerGraph__StaticFields_DEFINED)
#include <Modloader/app/structs/Color.h>
#if defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_MicroProfilerGraph__StaticFields_DEFINED
struct Metric__Enum__Array;
struct MicroProfilerGraph;
struct Dictionary_2_Moon_Profile_Marker_UnityEngine_Color_;
struct Color__Array;
struct Int32__Array;
struct MicroProfilerGraph__StaticFields {
    struct Color BLACK_COLOR;
    struct Color WHITE_COLOR;
    struct Color GREEN_COLOR;
    struct Color RED_COLOR;
    struct Metric__Enum__Array* DefaultVisibleMetrics;
    struct MicroProfilerGraph* Instance;
    struct Color ms_defaultColor;
    struct Dictionary_2_Moon_Profile_Marker_UnityEngine_Color_* MarkerColors;
    struct Color__Array* MetricColors;
    struct Int32__Array* numberBits;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MicroProfilerGraph__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_MicroProfilerGraph__StaticFields_FWDDECL
#include <Modloader/app/structs/Color__Array.h>
#include <Modloader/app/structs/Dictionary_2_Moon_Profile_Marker_UnityEngine_Color_.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Metric__Enum__Array.h>
#include <Modloader/app/structs/MicroProfilerGraph.h>
#endif
#undef IL2CPP_STRUCT_MicroProfilerGraph__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MicroProfilerGraph__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_MicroProfilerGraph__StaticFields_FWDDECL)
#include <Modloader/app/structs/MicroProfilerGraph__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MicroProfilerGraph__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
