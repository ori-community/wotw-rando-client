#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EscapeRaceData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EscapeRaceData_INITIALIZING
#if !defined(IL2CPP_STRUCT_EscapeRaceData_DEFINED)
#include <Modloader/app/structs/EscapeRaceData__Fields.h>
#if defined(IL2CPP_STRUCT_EscapeRaceData__Fields_DEFINED)
#define IL2CPP_STRUCT_EscapeRaceData_DEFINED
struct EscapeRaceData__Class;
struct EscapeRaceData {
    struct EscapeRaceData__Class* klass;
    MonitorData* monitor;
    struct EscapeRaceData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EscapeRaceData_FWDDECL)
#define IL2CPP_STRUCT_EscapeRaceData_FWDDECL
#include <Modloader/app/structs/EscapeRaceData__Class.h>
#endif
#undef IL2CPP_STRUCT_EscapeRaceData_INITIALIZING
#if !defined(IL2CPP_STRUCT_EscapeRaceData_DEFINED) && !defined(IL2CPP_STRUCT_EscapeRaceData_FWDDECL)
#include <Modloader/app/structs/EscapeRaceData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EscapeRaceData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
