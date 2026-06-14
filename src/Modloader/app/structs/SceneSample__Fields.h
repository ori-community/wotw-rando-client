#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneSample__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneSample__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneSample__Fields_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SceneSample__Fields_DEFINED
struct HPerfTestResult;
struct Dictionary_2_System_Int32_Moon_HierarchyPerformanceTest_HPerfTestResult_;
struct __declspec(align(8)) SceneSample__Fields {
    struct Vector3 CameraPosition;
    struct HPerfTestResult* BaselineMeasurement;
    struct Dictionary_2_System_Int32_Moon_HierarchyPerformanceTest_HPerfTestResult_* Results;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneSample__Fields_FWDDECL)
#define IL2CPP_STRUCT_SceneSample__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Int32_Moon_HierarchyPerformanceTest_HPerfTestResult_.h>
#include <Modloader/app/structs/HPerfTestResult.h>
#endif
#undef IL2CPP_STRUCT_SceneSample__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneSample__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SceneSample__Fields_FWDDECL)
#include <Modloader/app/structs/SceneSample__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneSample__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
