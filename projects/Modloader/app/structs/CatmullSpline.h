#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CatmullSpline_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CatmullSpline_INITIALIZING
#if !defined(IL2CPP_STRUCT_CatmullSpline_DEFINED)
#include <Modloader/app/structs/CatmullSpline__Fields.h>
#if defined(IL2CPP_STRUCT_CatmullSpline__Fields_DEFINED)
#define IL2CPP_STRUCT_CatmullSpline_DEFINED
struct CatmullSpline__Class;
struct CatmullSpline {
    struct CatmullSpline__Class* klass;
    MonitorData* monitor;
    struct CatmullSpline__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CatmullSpline_FWDDECL)
#define IL2CPP_STRUCT_CatmullSpline_FWDDECL
#include <Modloader/app/structs/CatmullSpline__Class.h>
#endif
#undef IL2CPP_STRUCT_CatmullSpline_INITIALIZING
#if !defined(IL2CPP_STRUCT_CatmullSpline_DEFINED) && !defined(IL2CPP_STRUCT_CatmullSpline_FWDDECL)
#include <Modloader/app/structs/CatmullSpline.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CatmullSpline.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
