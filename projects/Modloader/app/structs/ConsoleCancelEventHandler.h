#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConsoleCancelEventHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConsoleCancelEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConsoleCancelEventHandler_DEFINED)
#include <Modloader/app/structs/ConsoleCancelEventHandler__Fields.h>
#if defined(IL2CPP_STRUCT_ConsoleCancelEventHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_ConsoleCancelEventHandler_DEFINED
struct ConsoleCancelEventHandler__Class;
struct ConsoleCancelEventHandler {
    struct ConsoleCancelEventHandler__Class* klass;
    MonitorData* monitor;
    struct ConsoleCancelEventHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConsoleCancelEventHandler_FWDDECL)
#define IL2CPP_STRUCT_ConsoleCancelEventHandler_FWDDECL
#include <Modloader/app/structs/ConsoleCancelEventHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_ConsoleCancelEventHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConsoleCancelEventHandler_DEFINED) && !defined(IL2CPP_STRUCT_ConsoleCancelEventHandler_FWDDECL)
#include <Modloader/app/structs/ConsoleCancelEventHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConsoleCancelEventHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
