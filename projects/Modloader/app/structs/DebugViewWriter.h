#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugViewWriter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugViewWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugViewWriter_DEFINED)
#include <Modloader/app/structs/DebugViewWriter__Fields.h>
#if defined(IL2CPP_STRUCT_DebugViewWriter__Fields_DEFINED)
#define IL2CPP_STRUCT_DebugViewWriter_DEFINED
struct DebugViewWriter__Class;
struct DebugViewWriter {
    struct DebugViewWriter__Class* klass;
    MonitorData* monitor;
    struct DebugViewWriter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DebugViewWriter_FWDDECL)
#define IL2CPP_STRUCT_DebugViewWriter_FWDDECL
#include <Modloader/app/structs/DebugViewWriter__Class.h>
#endif
#undef IL2CPP_STRUCT_DebugViewWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugViewWriter_DEFINED) && !defined(IL2CPP_STRUCT_DebugViewWriter_FWDDECL)
#include <Modloader/app/structs/DebugViewWriter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugViewWriter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
