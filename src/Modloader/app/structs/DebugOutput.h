#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugOutput_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugOutput_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugOutput_DEFINED)
#include <Modloader/app/structs/DebugOutput__Fields.h>
#if defined(IL2CPP_STRUCT_DebugOutput__Fields_DEFINED)
#define IL2CPP_STRUCT_DebugOutput_DEFINED
struct DebugOutput__Class;
struct DebugOutput {
    struct DebugOutput__Class* klass;
    MonitorData* monitor;
    struct DebugOutput__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DebugOutput_FWDDECL)
#define IL2CPP_STRUCT_DebugOutput_FWDDECL
#include <Modloader/app/structs/DebugOutput__Class.h>
#endif
#undef IL2CPP_STRUCT_DebugOutput_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugOutput_DEFINED) && !defined(IL2CPP_STRUCT_DebugOutput_FWDDECL)
#include <Modloader/app/structs/DebugOutput.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugOutput.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
