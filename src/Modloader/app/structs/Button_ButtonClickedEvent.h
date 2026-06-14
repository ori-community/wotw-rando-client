#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Button_ButtonClickedEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Button_ButtonClickedEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_Button_ButtonClickedEvent_DEFINED)
#include <Modloader/app/structs/Button_ButtonClickedEvent__Fields.h>
#if defined(IL2CPP_STRUCT_Button_ButtonClickedEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_Button_ButtonClickedEvent_DEFINED
struct Button_ButtonClickedEvent__Class;
struct Button_ButtonClickedEvent {
    struct Button_ButtonClickedEvent__Class* klass;
    MonitorData* monitor;
    struct Button_ButtonClickedEvent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Button_ButtonClickedEvent_FWDDECL)
#define IL2CPP_STRUCT_Button_ButtonClickedEvent_FWDDECL
#include <Modloader/app/structs/Button_ButtonClickedEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_Button_ButtonClickedEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_Button_ButtonClickedEvent_DEFINED) && !defined(IL2CPP_STRUCT_Button_ButtonClickedEvent_FWDDECL)
#include <Modloader/app/structs/Button_ButtonClickedEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Button_ButtonClickedEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
