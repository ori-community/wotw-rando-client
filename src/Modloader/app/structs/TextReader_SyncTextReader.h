#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextReader_SyncTextReader_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextReader_SyncTextReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextReader_SyncTextReader_DEFINED)
#include <Modloader/app/structs/TextReader_SyncTextReader__Fields.h>
#if defined(IL2CPP_STRUCT_TextReader_SyncTextReader__Fields_DEFINED)
#define IL2CPP_STRUCT_TextReader_SyncTextReader_DEFINED
struct TextReader_SyncTextReader__Class;
struct TextReader_SyncTextReader {
    struct TextReader_SyncTextReader__Class* klass;
    MonitorData* monitor;
    struct TextReader_SyncTextReader__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextReader_SyncTextReader_FWDDECL)
#define IL2CPP_STRUCT_TextReader_SyncTextReader_FWDDECL
#include <Modloader/app/structs/TextReader_SyncTextReader__Class.h>
#endif
#undef IL2CPP_STRUCT_TextReader_SyncTextReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextReader_SyncTextReader_DEFINED) && !defined(IL2CPP_STRUCT_TextReader_SyncTextReader_FWDDECL)
#include <Modloader/app/structs/TextReader_SyncTextReader.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextReader_SyncTextReader.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
