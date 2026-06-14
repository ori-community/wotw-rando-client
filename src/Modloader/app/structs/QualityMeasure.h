#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_QualityMeasure_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_QualityMeasure_INITIALIZING
#if !defined(IL2CPP_STRUCT_QualityMeasure_DEFINED)
#include <Modloader/app/structs/QualityMeasure__Fields.h>
#if defined(IL2CPP_STRUCT_QualityMeasure__Fields_DEFINED)
#define IL2CPP_STRUCT_QualityMeasure_DEFINED
struct QualityMeasure__Class;
struct QualityMeasure {
    struct QualityMeasure__Class* klass;
    MonitorData* monitor;
    struct QualityMeasure__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_QualityMeasure_FWDDECL)
#define IL2CPP_STRUCT_QualityMeasure_FWDDECL
#include <Modloader/app/structs/QualityMeasure__Class.h>
#endif
#undef IL2CPP_STRUCT_QualityMeasure_INITIALIZING
#if !defined(IL2CPP_STRUCT_QualityMeasure_DEFINED) && !defined(IL2CPP_STRUCT_QualityMeasure_FWDDECL)
#include <Modloader/app/structs/QualityMeasure.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/QualityMeasure.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
