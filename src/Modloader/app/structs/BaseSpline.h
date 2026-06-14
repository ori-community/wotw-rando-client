#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BaseSpline_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BaseSpline_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseSpline_DEFINED)
#include <Modloader/app/structs/BaseSpline__Fields.h>
#if defined(IL2CPP_STRUCT_BaseSpline__Fields_DEFINED)
#define IL2CPP_STRUCT_BaseSpline_DEFINED
struct BaseSpline__Class;
struct BaseSpline {
    struct BaseSpline__Class* klass;
    MonitorData* monitor;
    struct BaseSpline__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BaseSpline_FWDDECL)
#define IL2CPP_STRUCT_BaseSpline_FWDDECL
#include <Modloader/app/structs/BaseSpline__Class.h>
#endif
#undef IL2CPP_STRUCT_BaseSpline_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseSpline_DEFINED) && !defined(IL2CPP_STRUCT_BaseSpline_FWDDECL)
#include <Modloader/app/structs/BaseSpline.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BaseSpline.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
