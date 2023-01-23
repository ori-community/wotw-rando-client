#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextWriter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextWriter_DEFINED)
#include <Modloader/app/structs/TextWriter__Fields.h>
#if defined(IL2CPP_STRUCT_TextWriter__Fields_DEFINED)
#define IL2CPP_STRUCT_TextWriter_DEFINED
struct TextWriter__Class;
struct TextWriter {
    struct TextWriter__Class* klass;
    MonitorData* monitor;
    struct TextWriter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextWriter_FWDDECL)
#define IL2CPP_STRUCT_TextWriter_FWDDECL
#include <Modloader/app/structs/TextWriter__Class.h>
#endif
#undef IL2CPP_STRUCT_TextWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextWriter_DEFINED) && !defined(IL2CPP_STRUCT_TextWriter_FWDDECL)
#include <Modloader/app/structs/TextWriter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextWriter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
