#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextReader_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextReader_DEFINED)
#include <Modloader/app/structs/TextReader__Fields.h>
#if defined(IL2CPP_STRUCT_TextReader__Fields_DEFINED)
#define IL2CPP_STRUCT_TextReader_DEFINED
struct TextReader__Class;
struct TextReader {
    struct TextReader__Class* klass;
    MonitorData* monitor;
    struct TextReader__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextReader_FWDDECL)
#define IL2CPP_STRUCT_TextReader_FWDDECL
#include <Modloader/app/structs/TextReader__Class.h>
#endif
#undef IL2CPP_STRUCT_TextReader_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextReader_DEFINED) && !defined(IL2CPP_STRUCT_TextReader_FWDDECL)
#include <Modloader/app/structs/TextReader.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextReader.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
