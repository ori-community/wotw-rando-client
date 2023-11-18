#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PerformanceTestManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PerformanceTestManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PerformanceTestManager__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/PerformanceTestManager_State__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_PerformanceTestManager_State__Enum_DEFINED)
#define IL2CPP_STRUCT_PerformanceTestManager__Fields_DEFINED
struct FPSTestOutput;
struct PerformanceTestManager__Fields {
    struct MonoBehaviour__Fields _;
    struct FPSTestOutput* m_fpsTestOutput;
    float m_stateCurrentTime;
    PerformanceTestManager_State__Enum CurrentState;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PerformanceTestManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_PerformanceTestManager__Fields_FWDDECL
#include <Modloader/app/structs/FPSTestOutput.h>
#endif
#undef IL2CPP_STRUCT_PerformanceTestManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PerformanceTestManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PerformanceTestManager__Fields_FWDDECL)
#include <Modloader/app/structs/PerformanceTestManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PerformanceTestManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
