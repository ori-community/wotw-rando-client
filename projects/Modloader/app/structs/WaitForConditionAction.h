#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaitForConditionAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaitForConditionAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitForConditionAction_DEFINED)
#include <Modloader/app/structs/WaitForConditionAction__Fields.h>
#if defined(IL2CPP_STRUCT_WaitForConditionAction__Fields_DEFINED)
#define IL2CPP_STRUCT_WaitForConditionAction_DEFINED
struct WaitForConditionAction__Class;
struct WaitForConditionAction {
    struct WaitForConditionAction__Class* klass;
    MonitorData* monitor;
    struct WaitForConditionAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaitForConditionAction_FWDDECL)
#define IL2CPP_STRUCT_WaitForConditionAction_FWDDECL
#include <Modloader/app/structs/WaitForConditionAction__Class.h>
#endif
#undef IL2CPP_STRUCT_WaitForConditionAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitForConditionAction_DEFINED) && !defined(IL2CPP_STRUCT_WaitForConditionAction_FWDDECL)
#include <Modloader/app/structs/WaitForConditionAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaitForConditionAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
