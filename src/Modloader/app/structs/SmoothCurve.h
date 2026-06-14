#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SmoothCurve_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SmoothCurve_INITIALIZING
#if !defined(IL2CPP_STRUCT_SmoothCurve_DEFINED)
#include <Modloader/app/structs/SmoothCurve__Fields.h>
#if defined(IL2CPP_STRUCT_SmoothCurve__Fields_DEFINED)
#define IL2CPP_STRUCT_SmoothCurve_DEFINED
struct SmoothCurve__Class;
struct SmoothCurve {
    struct SmoothCurve__Class* klass;
    MonitorData* monitor;
    struct SmoothCurve__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SmoothCurve_FWDDECL)
#define IL2CPP_STRUCT_SmoothCurve_FWDDECL
#include <Modloader/app/structs/SmoothCurve__Class.h>
#endif
#undef IL2CPP_STRUCT_SmoothCurve_INITIALIZING
#if !defined(IL2CPP_STRUCT_SmoothCurve_DEFINED) && !defined(IL2CPP_STRUCT_SmoothCurve_FWDDECL)
#include <Modloader/app/structs/SmoothCurve.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SmoothCurve.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
