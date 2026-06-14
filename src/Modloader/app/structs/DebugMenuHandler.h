#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugMenuHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugMenuHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugMenuHandler_DEFINED)
#include <Modloader/app/structs/DebugMenuHandler__Fields.h>
#if defined(IL2CPP_STRUCT_DebugMenuHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_DebugMenuHandler_DEFINED
struct DebugMenuHandler__Class;
struct DebugMenuHandler {
    struct DebugMenuHandler__Class* klass;
    MonitorData* monitor;
    struct DebugMenuHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DebugMenuHandler_FWDDECL)
#define IL2CPP_STRUCT_DebugMenuHandler_FWDDECL
#include <Modloader/app/structs/DebugMenuHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_DebugMenuHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugMenuHandler_DEFINED) && !defined(IL2CPP_STRUCT_DebugMenuHandler_FWDDECL)
#include <Modloader/app/structs/DebugMenuHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugMenuHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
