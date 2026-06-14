#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinEventsDebugger_Entry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinEventsDebugger_Entry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinEventsDebugger_Entry__Fields_DEFINED)
#include <Modloader/app/structs/SeinEvent__Enum.h>
#if defined(IL2CPP_STRUCT_SeinEvent__Enum_DEFINED)
#define IL2CPP_STRUCT_SeinEventsDebugger_Entry__Fields_DEFINED
struct __declspec(align(8)) SeinEventsDebugger_Entry__Fields {
    float Timeleft;
    SeinEvent__Enum Event;

    int64_t Index;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinEventsDebugger_Entry__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinEventsDebugger_Entry__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_SeinEventsDebugger_Entry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinEventsDebugger_Entry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinEventsDebugger_Entry__Fields_FWDDECL)
#include <Modloader/app/structs/SeinEventsDebugger_Entry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinEventsDebugger_Entry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
