#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BezierSpline_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BezierSpline_INITIALIZING
#if !defined(IL2CPP_STRUCT_BezierSpline_DEFINED)
#include <Modloader/app/structs/BezierSpline__Fields.h>
#if defined(IL2CPP_STRUCT_BezierSpline__Fields_DEFINED)
#define IL2CPP_STRUCT_BezierSpline_DEFINED
struct BezierSpline__Class;
struct BezierSpline {
    struct BezierSpline__Class* klass;
    MonitorData* monitor;
    struct BezierSpline__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BezierSpline_FWDDECL)
#define IL2CPP_STRUCT_BezierSpline_FWDDECL
#include <Modloader/app/structs/BezierSpline__Class.h>
#endif
#undef IL2CPP_STRUCT_BezierSpline_INITIALIZING
#if !defined(IL2CPP_STRUCT_BezierSpline_DEFINED) && !defined(IL2CPP_STRUCT_BezierSpline_FWDDECL)
#include <Modloader/app/structs/BezierSpline.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BezierSpline.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
