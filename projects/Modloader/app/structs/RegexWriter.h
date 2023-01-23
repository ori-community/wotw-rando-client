#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RegexWriter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RegexWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexWriter_DEFINED)
#include <Modloader/app/structs/RegexWriter__Fields.h>
#if defined(IL2CPP_STRUCT_RegexWriter__Fields_DEFINED)
#define IL2CPP_STRUCT_RegexWriter_DEFINED
struct RegexWriter__Class;
struct RegexWriter {
    struct RegexWriter__Class* klass;
    MonitorData* monitor;
    struct RegexWriter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RegexWriter_FWDDECL)
#define IL2CPP_STRUCT_RegexWriter_FWDDECL
#include <Modloader/app/structs/RegexWriter__Class.h>
#endif
#undef IL2CPP_STRUCT_RegexWriter_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexWriter_DEFINED) && !defined(IL2CPP_STRUCT_RegexWriter_FWDDECL)
#include <Modloader/app/structs/RegexWriter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RegexWriter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
