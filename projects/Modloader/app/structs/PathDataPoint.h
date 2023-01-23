#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PathDataPoint_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PathDataPoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_PathDataPoint_DEFINED)
#include <Modloader/app/structs/PathDataPoint__Fields.h>
#if defined(IL2CPP_STRUCT_PathDataPoint__Fields_DEFINED)
#define IL2CPP_STRUCT_PathDataPoint_DEFINED
struct PathDataPoint__Class;
struct PathDataPoint {
    struct PathDataPoint__Class* klass;
    MonitorData* monitor;
    struct PathDataPoint__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PathDataPoint_FWDDECL)
#define IL2CPP_STRUCT_PathDataPoint_FWDDECL
#include <Modloader/app/structs/PathDataPoint__Class.h>
#endif
#undef IL2CPP_STRUCT_PathDataPoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_PathDataPoint_DEFINED) && !defined(IL2CPP_STRUCT_PathDataPoint_FWDDECL)
#include <Modloader/app/structs/PathDataPoint.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PathDataPoint.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
