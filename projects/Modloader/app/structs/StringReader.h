#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StringReader_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StringReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringReader_DEFINED)
#include <Modloader/app/structs/StringReader__Fields.h>
#if defined(IL2CPP_STRUCT_StringReader__Fields_DEFINED)
#define IL2CPP_STRUCT_StringReader_DEFINED
struct StringReader__Class;
struct StringReader {
    struct StringReader__Class* klass;
    MonitorData* monitor;
    struct StringReader__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StringReader_FWDDECL)
#define IL2CPP_STRUCT_StringReader_FWDDECL
#include <Modloader/app/structs/StringReader__Class.h>
#endif
#undef IL2CPP_STRUCT_StringReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_StringReader_DEFINED) && !defined(IL2CPP_STRUCT_StringReader_FWDDECL)
#include <Modloader/app/structs/StringReader.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StringReader.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
