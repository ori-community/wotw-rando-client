#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Task__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Task__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Task__Fields_DEFINED)
#define IL2CPP_STRUCT_Task__Fields_DEFINED
struct Object;
struct TaskScheduler;
struct Task;
struct Task_ContingentProperties;
struct __declspec(align(8)) Task__Fields {
    int32_t m_taskId;
    struct Object* m_action;
    struct Object* m_stateObject;
    struct TaskScheduler* m_taskScheduler;
    struct Task* m_parent;
    int32_t m_stateFlags;
    struct Object* m_continuationObject;
    struct Task_ContingentProperties* m_contingentProperties;
};
#endif
#if !defined(IL2CPP_STRUCT_Task__Fields_FWDDECL)
#define IL2CPP_STRUCT_Task__Fields_FWDDECL
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Task.h>
#include <Modloader/app/structs/TaskScheduler.h>
#include <Modloader/app/structs/Task_ContingentProperties.h>
#endif
#undef IL2CPP_STRUCT_Task__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Task__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Task__Fields_FWDDECL)
#include <Modloader/app/structs/Task__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Task__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
