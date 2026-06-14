#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimesliceBudgetCaptureAgent__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimesliceBudgetCaptureAgent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimesliceBudgetCaptureAgent__Fields_DEFINED)
#define IL2CPP_STRUCT_TimesliceBudgetCaptureAgent__Fields_DEFINED
struct String__Array;
struct String;
struct __declspec(align(8)) TimesliceBudgetCaptureAgent__Fields {
    struct String__Array* m_frameData;
    bool m_expensiveReportThisFrame;
    float m_budget;
    double m_usedTime;
    int32_t m_amountOfJobs;
    struct String* m_expensiveObjectReport;
};
#endif
#if !defined(IL2CPP_STRUCT_TimesliceBudgetCaptureAgent__Fields_FWDDECL)
#define IL2CPP_STRUCT_TimesliceBudgetCaptureAgent__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_TimesliceBudgetCaptureAgent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimesliceBudgetCaptureAgent__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TimesliceBudgetCaptureAgent__Fields_FWDDECL)
#include <Modloader/app/structs/TimesliceBudgetCaptureAgent__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimesliceBudgetCaptureAgent__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
