#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IsXboxOneCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IsXboxOneCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_IsXboxOneCondition_DEFINED)
#include <Modloader/app/structs/IsXboxOneCondition__Fields.h>
#if defined(IL2CPP_STRUCT_IsXboxOneCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_IsXboxOneCondition_DEFINED
struct IsXboxOneCondition__Class;
struct IsXboxOneCondition {
    struct IsXboxOneCondition__Class* klass;
    MonitorData* monitor;
    struct IsXboxOneCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IsXboxOneCondition_FWDDECL)
#define IL2CPP_STRUCT_IsXboxOneCondition_FWDDECL
#include <Modloader/app/structs/IsXboxOneCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_IsXboxOneCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_IsXboxOneCondition_DEFINED) && !defined(IL2CPP_STRUCT_IsXboxOneCondition_FWDDECL)
#include <Modloader/app/structs/IsXboxOneCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IsXboxOneCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
