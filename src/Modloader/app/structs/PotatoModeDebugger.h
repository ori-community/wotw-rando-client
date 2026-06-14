#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PotatoModeDebugger_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PotatoModeDebugger_INITIALIZING
#if !defined(IL2CPP_STRUCT_PotatoModeDebugger_DEFINED)
#define IL2CPP_STRUCT_PotatoModeDebugger_DEFINED
struct PotatoModeDebugger__Class;
struct PotatoModeDebugger {
    struct PotatoModeDebugger__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_PotatoModeDebugger_FWDDECL)
#define IL2CPP_STRUCT_PotatoModeDebugger_FWDDECL
#include <Modloader/app/structs/PotatoModeDebugger__Class.h>
#endif
#undef IL2CPP_STRUCT_PotatoModeDebugger_INITIALIZING
#if !defined(IL2CPP_STRUCT_PotatoModeDebugger_DEFINED) && !defined(IL2CPP_STRUCT_PotatoModeDebugger_FWDDECL)
#include <Modloader/app/structs/PotatoModeDebugger.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PotatoModeDebugger.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
