#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StringWriter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StringWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringWriter_DEFINED)
#include <Modloader/app/structs/StringWriter__Fields.h>
#if defined(IL2CPP_STRUCT_StringWriter__Fields_DEFINED)
#define IL2CPP_STRUCT_StringWriter_DEFINED
struct StringWriter__Class;
struct StringWriter {
    struct StringWriter__Class* klass;
    MonitorData* monitor;
    struct StringWriter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StringWriter_FWDDECL)
#define IL2CPP_STRUCT_StringWriter_FWDDECL
#include <Modloader/app/structs/StringWriter__Class.h>
#endif
#undef IL2CPP_STRUCT_StringWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringWriter_DEFINED) && !defined(IL2CPP_STRUCT_StringWriter_FWDDECL)
#include <Modloader/app/structs/StringWriter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StringWriter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
