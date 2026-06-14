#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StreamWriter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StreamWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_StreamWriter_DEFINED)
#include <Modloader/app/structs/StreamWriter__Fields.h>
#if defined(IL2CPP_STRUCT_StreamWriter__Fields_DEFINED)
#define IL2CPP_STRUCT_StreamWriter_DEFINED
struct StreamWriter__Class;
struct StreamWriter {
    struct StreamWriter__Class* klass;
    MonitorData* monitor;
    struct StreamWriter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StreamWriter_FWDDECL)
#define IL2CPP_STRUCT_StreamWriter_FWDDECL
#include <Modloader/app/structs/StreamWriter__Class.h>
#endif
#undef IL2CPP_STRUCT_StreamWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_StreamWriter_DEFINED) && !defined(IL2CPP_STRUCT_StreamWriter_FWDDECL)
#include <Modloader/app/structs/StreamWriter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StreamWriter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
