#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EndGameTrigger_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EndGameTrigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_EndGameTrigger_DEFINED)
#include <Modloader/app/structs/EndGameTrigger__Fields.h>
#if defined(IL2CPP_STRUCT_EndGameTrigger__Fields_DEFINED)
#define IL2CPP_STRUCT_EndGameTrigger_DEFINED
struct EndGameTrigger__Class;
struct EndGameTrigger {
    struct EndGameTrigger__Class* klass;
    MonitorData* monitor;
    struct EndGameTrigger__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EndGameTrigger_FWDDECL)
#define IL2CPP_STRUCT_EndGameTrigger_FWDDECL
#include <Modloader/app/structs/EndGameTrigger__Class.h>
#endif
#undef IL2CPP_STRUCT_EndGameTrigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_EndGameTrigger_DEFINED) && !defined(IL2CPP_STRUCT_EndGameTrigger_FWDDECL)
#include <Modloader/app/structs/EndGameTrigger.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EndGameTrigger.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
