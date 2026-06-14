#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Datadog__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Datadog__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datadog__Fields_DEFINED)
#define IL2CPP_STRUCT_Datadog__Fields_DEFINED
struct HashSet_1_System_Threading_Thread_;
struct List_1_Datadog_ThresholdItem_;
struct __declspec(align(8)) Datadog__Fields {
    struct HashSet_1_System_Threading_Thread_* m_jobs;
    struct List_1_Datadog_ThresholdItem_* m_thresholdItems;
};
#endif
#if !defined(IL2CPP_STRUCT_Datadog__Fields_FWDDECL)
#define IL2CPP_STRUCT_Datadog__Fields_FWDDECL
#include <Modloader/app/structs/HashSet_1_System_Threading_Thread_.h>
#include <Modloader/app/structs/List_1_Datadog_ThresholdItem_.h>
#endif
#undef IL2CPP_STRUCT_Datadog__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Datadog__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Datadog__Fields_FWDDECL)
#include <Modloader/app/structs/Datadog__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Datadog__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
