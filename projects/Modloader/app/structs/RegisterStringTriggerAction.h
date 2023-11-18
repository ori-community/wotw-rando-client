#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RegisterStringTriggerAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RegisterStringTriggerAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegisterStringTriggerAction_DEFINED)
#include <Modloader/app/structs/RegisterStringTriggerAction__Fields.h>
#if defined(IL2CPP_STRUCT_RegisterStringTriggerAction__Fields_DEFINED)
#define IL2CPP_STRUCT_RegisterStringTriggerAction_DEFINED
struct RegisterStringTriggerAction__Class;
struct RegisterStringTriggerAction {
    struct RegisterStringTriggerAction__Class* klass;
    MonitorData* monitor;
    struct RegisterStringTriggerAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RegisterStringTriggerAction_FWDDECL)
#define IL2CPP_STRUCT_RegisterStringTriggerAction_FWDDECL
#include <Modloader/app/structs/RegisterStringTriggerAction__Class.h>
#endif
#undef IL2CPP_STRUCT_RegisterStringTriggerAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegisterStringTriggerAction_DEFINED) && !defined(IL2CPP_STRUCT_RegisterStringTriggerAction_FWDDECL)
#include <Modloader/app/structs/RegisterStringTriggerAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RegisterStringTriggerAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
