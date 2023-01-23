#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_QualityMeasure__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_QualityMeasure__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_QualityMeasure__Fields_DEFINED)
#define IL2CPP_STRUCT_QualityMeasure__Fields_DEFINED
struct QualityMeasure_AreaMeasure;
struct QualityMeasure_AlphaMeasure;
struct QualityMeasure_Q_Measure;
struct Mesh_1;
struct __declspec(align(8)) QualityMeasure__Fields {
    struct QualityMeasure_AreaMeasure* areaMeasure;
    struct QualityMeasure_AlphaMeasure* alphaMeasure;
    struct QualityMeasure_Q_Measure* qMeasure;
    struct Mesh_1* mesh;
};
#endif
#if !defined(IL2CPP_STRUCT_QualityMeasure__Fields_FWDDECL)
#define IL2CPP_STRUCT_QualityMeasure__Fields_FWDDECL
#include <Modloader/app/structs/Mesh_1.h>
#include <Modloader/app/structs/QualityMeasure_AlphaMeasure.h>
#include <Modloader/app/structs/QualityMeasure_AreaMeasure.h>
#include <Modloader/app/structs/QualityMeasure_Q_Measure.h>
#endif
#undef IL2CPP_STRUCT_QualityMeasure__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_QualityMeasure__Fields_DEFINED) && !defined(IL2CPP_STRUCT_QualityMeasure__Fields_FWDDECL)
#include <Modloader/app/structs/QualityMeasure__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/QualityMeasure__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
