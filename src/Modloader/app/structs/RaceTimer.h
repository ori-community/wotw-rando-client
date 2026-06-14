#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceTimer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceTimer_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceTimer_DEFINED)
#include <Modloader/app/structs/RaceTimer__Fields.h>
#if defined(IL2CPP_STRUCT_RaceTimer__Fields_DEFINED)
#define IL2CPP_STRUCT_RaceTimer_DEFINED
struct RaceTimer__Class;
struct RaceTimer {
    struct RaceTimer__Class* klass;
    MonitorData* monitor;
    struct RaceTimer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaceTimer_FWDDECL)
#define IL2CPP_STRUCT_RaceTimer_FWDDECL
#include <Modloader/app/structs/RaceTimer__Class.h>
#endif
#undef IL2CPP_STRUCT_RaceTimer_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceTimer_DEFINED) && !defined(IL2CPP_STRUCT_RaceTimer_FWDDECL)
#include <Modloader/app/structs/RaceTimer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceTimer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
