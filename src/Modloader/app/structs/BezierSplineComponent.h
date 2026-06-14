#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BezierSplineComponent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BezierSplineComponent_INITIALIZING
#if !defined(IL2CPP_STRUCT_BezierSplineComponent_DEFINED)
#include <Modloader/app/structs/BezierSplineComponent__Fields.h>
#if defined(IL2CPP_STRUCT_BezierSplineComponent__Fields_DEFINED)
#define IL2CPP_STRUCT_BezierSplineComponent_DEFINED
struct BezierSplineComponent__Class;
struct BezierSplineComponent {
    struct BezierSplineComponent__Class* klass;
    MonitorData* monitor;
    struct BezierSplineComponent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BezierSplineComponent_FWDDECL)
#define IL2CPP_STRUCT_BezierSplineComponent_FWDDECL
#include <Modloader/app/structs/BezierSplineComponent__Class.h>
#endif
#undef IL2CPP_STRUCT_BezierSplineComponent_INITIALIZING
#if !defined(IL2CPP_STRUCT_BezierSplineComponent_DEFINED) && !defined(IL2CPP_STRUCT_BezierSplineComponent_FWDDECL)
#include <Modloader/app/structs/BezierSplineComponent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BezierSplineComponent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
