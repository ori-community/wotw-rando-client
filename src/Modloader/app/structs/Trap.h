#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Trap_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Trap_INITIALIZING
#if !defined(IL2CPP_STRUCT_Trap_DEFINED)
#include <Modloader/app/structs/Trap__Fields.h>
#if defined(IL2CPP_STRUCT_Trap__Fields_DEFINED)
#define IL2CPP_STRUCT_Trap_DEFINED
struct Trap__Class;
struct Trap {
    struct Trap__Class* klass;
    MonitorData* monitor;
    struct Trap__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Trap_FWDDECL)
#define IL2CPP_STRUCT_Trap_FWDDECL
#include <Modloader/app/structs/Trap__Class.h>
#endif
#undef IL2CPP_STRUCT_Trap_INITIALIZING
#if !defined(IL2CPP_STRUCT_Trap_DEFINED) && !defined(IL2CPP_STRUCT_Trap_FWDDECL)
#include <Modloader/app/structs/Trap.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Trap.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
