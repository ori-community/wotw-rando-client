#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TaskToApm_TaskWrapperAsyncResult__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TaskToApm_TaskWrapperAsyncResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TaskToApm_TaskWrapperAsyncResult__Fields_DEFINED)
#define IL2CPP_STRUCT_TaskToApm_TaskWrapperAsyncResult__Fields_DEFINED
struct Task;
struct Object;
struct __declspec(align(8)) TaskToApm_TaskWrapperAsyncResult__Fields {
    struct Task* Task;
    struct Object* m_state;
    bool m_completedSynchronously;
};
#endif
#if !defined(IL2CPP_STRUCT_TaskToApm_TaskWrapperAsyncResult__Fields_FWDDECL)
#define IL2CPP_STRUCT_TaskToApm_TaskWrapperAsyncResult__Fields_FWDDECL
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Task.h>
#endif
#undef IL2CPP_STRUCT_TaskToApm_TaskWrapperAsyncResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TaskToApm_TaskWrapperAsyncResult__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TaskToApm_TaskWrapperAsyncResult__Fields_FWDDECL)
#include <Modloader/app/structs/TaskToApm_TaskWrapperAsyncResult__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TaskToApm_TaskWrapperAsyncResult__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
