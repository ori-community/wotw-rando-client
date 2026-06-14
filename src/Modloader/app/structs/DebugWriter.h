#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugWriter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugWriter_DEFINED)
#include <Modloader/app/structs/DebugWriter__Fields.h>
#if defined(IL2CPP_STRUCT_DebugWriter__Fields_DEFINED)
#define IL2CPP_STRUCT_DebugWriter_DEFINED
struct DebugWriter__Class;
struct DebugWriter {
    struct DebugWriter__Class* klass;
    MonitorData* monitor;
    struct DebugWriter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DebugWriter_FWDDECL)
#define IL2CPP_STRUCT_DebugWriter_FWDDECL
#include <Modloader/app/structs/DebugWriter__Class.h>
#endif
#undef IL2CPP_STRUCT_DebugWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugWriter_DEFINED) && !defined(IL2CPP_STRUCT_DebugWriter_FWDDECL)
#include <Modloader/app/structs/DebugWriter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugWriter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
