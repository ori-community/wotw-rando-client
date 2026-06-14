#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AsyncHelper__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AsyncHelper__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncHelper__StaticFields_DEFINED)
#define IL2CPP_STRUCT_AsyncHelper__StaticFields_DEFINED
struct Task;
struct Task_1_System_Boolean_;
struct Task_1_System_Int32_;
struct AsyncHelper__StaticFields {
    struct Task* DoneTask;
    struct Task_1_System_Boolean_* DoneTaskTrue;
    struct Task_1_System_Boolean_* DoneTaskFalse;
    struct Task_1_System_Int32_* DoneTaskZero;
};
#endif
#if !defined(IL2CPP_STRUCT_AsyncHelper__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_AsyncHelper__StaticFields_FWDDECL
#include <Modloader/app/structs/Task.h>
#include <Modloader/app/structs/Task_1_System_Boolean_.h>
#include <Modloader/app/structs/Task_1_System_Int32_.h>
#endif
#undef IL2CPP_STRUCT_AsyncHelper__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncHelper__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_AsyncHelper__StaticFields_FWDDECL)
#include <Modloader/app/structs/AsyncHelper__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AsyncHelper__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
