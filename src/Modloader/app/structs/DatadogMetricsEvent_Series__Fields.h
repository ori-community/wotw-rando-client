#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DatadogMetricsEvent_Series__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DatadogMetricsEvent_Series__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DatadogMetricsEvent_Series__Fields_DEFINED)
#define IL2CPP_STRUCT_DatadogMetricsEvent_Series__Fields_DEFINED
struct String;
struct List_1_System_String_;
struct List_1_System_Int64_;
struct __declspec(align(8)) DatadogMetricsEvent_Series__Fields {
    struct String* metric;
    struct String* type;
    struct String* host;
    struct List_1_System_String_* tags;
    struct String* points;
    struct List_1_System_Int64_* PointsObject;
};
#endif
#if !defined(IL2CPP_STRUCT_DatadogMetricsEvent_Series__Fields_FWDDECL)
#define IL2CPP_STRUCT_DatadogMetricsEvent_Series__Fields_FWDDECL
#include <Modloader/app/structs/List_1_System_Int64_.h>
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_DatadogMetricsEvent_Series__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DatadogMetricsEvent_Series__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DatadogMetricsEvent_Series__Fields_FWDDECL)
#include <Modloader/app/structs/DatadogMetricsEvent_Series__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DatadogMetricsEvent_Series__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
