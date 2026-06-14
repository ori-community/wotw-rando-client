#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextWriter_SyncTextWriter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextWriter_SyncTextWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextWriter_SyncTextWriter_DEFINED)
#include <Modloader/app/structs/TextWriter_SyncTextWriter__Fields.h>
#if defined(IL2CPP_STRUCT_TextWriter_SyncTextWriter__Fields_DEFINED)
#define IL2CPP_STRUCT_TextWriter_SyncTextWriter_DEFINED
struct TextWriter_SyncTextWriter__Class;
struct TextWriter_SyncTextWriter {
    struct TextWriter_SyncTextWriter__Class* klass;
    MonitorData* monitor;
    struct TextWriter_SyncTextWriter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextWriter_SyncTextWriter_FWDDECL)
#define IL2CPP_STRUCT_TextWriter_SyncTextWriter_FWDDECL
#include <Modloader/app/structs/TextWriter_SyncTextWriter__Class.h>
#endif
#undef IL2CPP_STRUCT_TextWriter_SyncTextWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextWriter_SyncTextWriter_DEFINED) && !defined(IL2CPP_STRUCT_TextWriter_SyncTextWriter_FWDDECL)
#include <Modloader/app/structs/TextWriter_SyncTextWriter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextWriter_SyncTextWriter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
