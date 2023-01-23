#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SimpleTask__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SimpleTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleTask__Fields_DEFINED)
#include <Modloader/app/structs/TaskState__Enum.h>
#if defined(IL2CPP_STRUCT_TaskState__Enum_DEFINED)
#define IL2CPP_STRUCT_SimpleTask__Fields_DEFINED
struct IOptimizationTask;
struct __declspec(align(8)) SimpleTask__Fields {
    TaskState__Enum m_state;

    struct IOptimizationTask* m_nextTask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SimpleTask__Fields_FWDDECL)
#define IL2CPP_STRUCT_SimpleTask__Fields_FWDDECL
#include <Modloader/app/structs/IOptimizationTask.h>
#endif
#undef IL2CPP_STRUCT_SimpleTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleTask__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SimpleTask__Fields_FWDDECL)
#include <Modloader/app/structs/SimpleTask__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SimpleTask__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
