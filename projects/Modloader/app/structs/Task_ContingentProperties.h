#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Task_ContingentProperties_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Task_ContingentProperties_INITIALIZING
#if !defined(IL2CPP_STRUCT_Task_ContingentProperties_DEFINED)
#include <Modloader/app/structs/Task_ContingentProperties__Fields.h>
#if defined(IL2CPP_STRUCT_Task_ContingentProperties__Fields_DEFINED)
#define IL2CPP_STRUCT_Task_ContingentProperties_DEFINED
struct Task_ContingentProperties__Class;
struct Task_ContingentProperties {
    struct Task_ContingentProperties__Class* klass;
    MonitorData* monitor;
    struct Task_ContingentProperties__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Task_ContingentProperties_FWDDECL)
#define IL2CPP_STRUCT_Task_ContingentProperties_FWDDECL
#include <Modloader/app/structs/Task_ContingentProperties__Class.h>
#endif
#undef IL2CPP_STRUCT_Task_ContingentProperties_INITIALIZING
#if !defined(IL2CPP_STRUCT_Task_ContingentProperties_DEFINED) && !defined(IL2CPP_STRUCT_Task_ContingentProperties_FWDDECL)
#include <Modloader/app/structs/Task_ContingentProperties.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Task_ContingentProperties.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
