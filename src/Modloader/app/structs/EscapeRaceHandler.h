#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EscapeRaceHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EscapeRaceHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_EscapeRaceHandler_DEFINED)
#include <Modloader/app/structs/EscapeRaceHandler__Fields.h>
#if defined(IL2CPP_STRUCT_EscapeRaceHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_EscapeRaceHandler_DEFINED
struct EscapeRaceHandler__Class;
struct EscapeRaceHandler {
    struct EscapeRaceHandler__Class* klass;
    MonitorData* monitor;
    struct EscapeRaceHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EscapeRaceHandler_FWDDECL)
#define IL2CPP_STRUCT_EscapeRaceHandler_FWDDECL
#include <Modloader/app/structs/EscapeRaceHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_EscapeRaceHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_EscapeRaceHandler_DEFINED) && !defined(IL2CPP_STRUCT_EscapeRaceHandler_FWDDECL)
#include <Modloader/app/structs/EscapeRaceHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EscapeRaceHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
