#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ContinuationTaskFromTask__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ContinuationTaskFromTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContinuationTaskFromTask__Fields_DEFINED)
#include <Modloader/app/structs/Task__Fields.h>
#if defined(IL2CPP_STRUCT_Task__Fields_DEFINED)
#define IL2CPP_STRUCT_ContinuationTaskFromTask__Fields_DEFINED
struct Task;
struct ContinuationTaskFromTask__Fields {
    struct Task__Fields _;
    struct Task* m_antecedent;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ContinuationTaskFromTask__Fields_FWDDECL)
#define IL2CPP_STRUCT_ContinuationTaskFromTask__Fields_FWDDECL
#include <Modloader/app/structs/Task.h>
#endif
#undef IL2CPP_STRUCT_ContinuationTaskFromTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContinuationTaskFromTask__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ContinuationTaskFromTask__Fields_FWDDECL)
#include <Modloader/app/structs/ContinuationTaskFromTask__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ContinuationTaskFromTask__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
