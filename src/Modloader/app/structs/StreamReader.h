#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StreamReader_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StreamReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_StreamReader_DEFINED)
#include <Modloader/app/structs/StreamReader__Fields.h>
#if defined(IL2CPP_STRUCT_StreamReader__Fields_DEFINED)
#define IL2CPP_STRUCT_StreamReader_DEFINED
struct StreamReader__Class;
struct StreamReader {
    struct StreamReader__Class* klass;
    MonitorData* monitor;
    struct StreamReader__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StreamReader_FWDDECL)
#define IL2CPP_STRUCT_StreamReader_FWDDECL
#include <Modloader/app/structs/StreamReader__Class.h>
#endif
#undef IL2CPP_STRUCT_StreamReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_StreamReader_DEFINED) && !defined(IL2CPP_STRUCT_StreamReader_FWDDECL)
#include <Modloader/app/structs/StreamReader.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StreamReader.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
