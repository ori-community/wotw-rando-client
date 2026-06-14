#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KillCounterDisplay_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KillCounterDisplay_INITIALIZING
#if !defined(IL2CPP_STRUCT_KillCounterDisplay_DEFINED)
#include <Modloader/app/structs/KillCounterDisplay__Fields.h>
#if defined(IL2CPP_STRUCT_KillCounterDisplay__Fields_DEFINED)
#define IL2CPP_STRUCT_KillCounterDisplay_DEFINED
struct KillCounterDisplay__Class;
struct KillCounterDisplay {
    struct KillCounterDisplay__Class* klass;
    MonitorData* monitor;
    struct KillCounterDisplay__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KillCounterDisplay_FWDDECL)
#define IL2CPP_STRUCT_KillCounterDisplay_FWDDECL
#include <Modloader/app/structs/KillCounterDisplay__Class.h>
#endif
#undef IL2CPP_STRUCT_KillCounterDisplay_INITIALIZING
#if !defined(IL2CPP_STRUCT_KillCounterDisplay_DEFINED) && !defined(IL2CPP_STRUCT_KillCounterDisplay_FWDDECL)
#include <Modloader/app/structs/KillCounterDisplay.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KillCounterDisplay.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
