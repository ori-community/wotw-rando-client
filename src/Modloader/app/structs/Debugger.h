#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Debugger_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Debugger_INITIALIZING
#if !defined(IL2CPP_STRUCT_Debugger_DEFINED)
#define IL2CPP_STRUCT_Debugger_DEFINED
struct Debugger__Class;
struct Debugger {
    struct Debugger__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Debugger_FWDDECL)
#define IL2CPP_STRUCT_Debugger_FWDDECL
#include <Modloader/app/structs/Debugger__Class.h>
#endif
#undef IL2CPP_STRUCT_Debugger_INITIALIZING
#if !defined(IL2CPP_STRUCT_Debugger_DEFINED) && !defined(IL2CPP_STRUCT_Debugger_FWDDECL)
#include <Modloader/app/structs/Debugger.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Debugger.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
