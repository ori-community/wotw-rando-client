#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceDebug_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceDebug_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceDebug_DEFINED)
#include <Modloader/app/structs/RaceDebug__Fields.h>
#if defined(IL2CPP_STRUCT_RaceDebug__Fields_DEFINED)
#define IL2CPP_STRUCT_RaceDebug_DEFINED
struct RaceDebug__Class;
struct RaceDebug {
    struct RaceDebug__Class* klass;
    MonitorData* monitor;
    struct RaceDebug__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaceDebug_FWDDECL)
#define IL2CPP_STRUCT_RaceDebug_FWDDECL
#include <Modloader/app/structs/RaceDebug__Class.h>
#endif
#undef IL2CPP_STRUCT_RaceDebug_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceDebug_DEFINED) && !defined(IL2CPP_STRUCT_RaceDebug_FWDDECL)
#include <Modloader/app/structs/RaceDebug.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceDebug.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
