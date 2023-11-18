#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimerTextbox_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimerTextbox_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimerTextbox_DEFINED)
#include <Modloader/app/structs/TimerTextbox__Fields.h>
#if defined(IL2CPP_STRUCT_TimerTextbox__Fields_DEFINED)
#define IL2CPP_STRUCT_TimerTextbox_DEFINED
struct TimerTextbox__Class;
struct TimerTextbox {
    struct TimerTextbox__Class* klass;
    MonitorData* monitor;
    struct TimerTextbox__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimerTextbox_FWDDECL)
#define IL2CPP_STRUCT_TimerTextbox_FWDDECL
#include <Modloader/app/structs/TimerTextbox__Class.h>
#endif
#undef IL2CPP_STRUCT_TimerTextbox_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimerTextbox_DEFINED) && !defined(IL2CPP_STRUCT_TimerTextbox_FWDDECL)
#include <Modloader/app/structs/TimerTextbox.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimerTextbox.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
