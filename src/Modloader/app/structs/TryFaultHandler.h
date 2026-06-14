#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TryFaultHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TryFaultHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_TryFaultHandler_DEFINED)
#include <Modloader/app/structs/TryFaultHandler__Fields.h>
#if defined(IL2CPP_STRUCT_TryFaultHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_TryFaultHandler_DEFINED
struct TryFaultHandler__Class;
struct TryFaultHandler {
    struct TryFaultHandler__Class* klass;
    MonitorData* monitor;
    struct TryFaultHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TryFaultHandler_FWDDECL)
#define IL2CPP_STRUCT_TryFaultHandler_FWDDECL
#include <Modloader/app/structs/TryFaultHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_TryFaultHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_TryFaultHandler_DEFINED) && !defined(IL2CPP_STRUCT_TryFaultHandler_FWDDECL)
#include <Modloader/app/structs/TryFaultHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TryFaultHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
