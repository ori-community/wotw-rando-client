#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Task_c_DisplayClass178_0__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Task_c_DisplayClass178_0__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Task_c_DisplayClass178_0__Fields_DEFINED)
#include <Modloader/app/structs/InternalTaskOptions__Enum.h>
#include <Modloader/app/structs/TaskCreationOptions__Enum.h>
#if defined(IL2CPP_STRUCT_TaskCreationOptions__Enum_DEFINED) && defined(IL2CPP_STRUCT_InternalTaskOptions__Enum_DEFINED)
#define IL2CPP_STRUCT_Task_c_DisplayClass178_0__Fields_DEFINED
struct Task;
struct Action_1_Object_;
struct __declspec(align(8)) Task_c_DisplayClass178_0__Fields {
    struct Task* root;
    bool replicasAreQuitting;
    struct Action_1_Object_* taskReplicaDelegate;
    TaskCreationOptions__Enum creationOptionsForReplicas;

    InternalTaskOptions__Enum internalOptionsForReplicas;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Task_c_DisplayClass178_0__Fields_FWDDECL)
#define IL2CPP_STRUCT_Task_c_DisplayClass178_0__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_Object_.h>
#include <Modloader/app/structs/Task.h>
#endif
#undef IL2CPP_STRUCT_Task_c_DisplayClass178_0__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Task_c_DisplayClass178_0__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Task_c_DisplayClass178_0__Fields_FWDDECL)
#include <Modloader/app/structs/Task_c_DisplayClass178_0__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Task_c_DisplayClass178_0__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
