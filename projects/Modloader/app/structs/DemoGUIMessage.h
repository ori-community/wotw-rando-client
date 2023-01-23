#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DemoGUIMessage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DemoGUIMessage_INITIALIZING
#if !defined(IL2CPP_STRUCT_DemoGUIMessage_DEFINED)
#include <Modloader/app/structs/DemoGUIMessage__Fields.h>
#if defined(IL2CPP_STRUCT_DemoGUIMessage__Fields_DEFINED)
#define IL2CPP_STRUCT_DemoGUIMessage_DEFINED
struct DemoGUIMessage__Class;
struct DemoGUIMessage {
    struct DemoGUIMessage__Class* klass;
    MonitorData* monitor;
    struct DemoGUIMessage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DemoGUIMessage_FWDDECL)
#define IL2CPP_STRUCT_DemoGUIMessage_FWDDECL
#include <Modloader/app/structs/DemoGUIMessage__Class.h>
#endif
#undef IL2CPP_STRUCT_DemoGUIMessage_INITIALIZING
#if !defined(IL2CPP_STRUCT_DemoGUIMessage_DEFINED) && !defined(IL2CPP_STRUCT_DemoGUIMessage_FWDDECL)
#include <Modloader/app/structs/DemoGUIMessage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DemoGUIMessage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
