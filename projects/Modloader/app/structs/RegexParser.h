#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RegexParser_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RegexParser_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexParser_DEFINED)
#include <Modloader/app/structs/RegexParser__Fields.h>
#if defined(IL2CPP_STRUCT_RegexParser__Fields_DEFINED)
#define IL2CPP_STRUCT_RegexParser_DEFINED
struct RegexParser__Class;
struct RegexParser {
    struct RegexParser__Class* klass;
    MonitorData* monitor;
    struct RegexParser__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RegexParser_FWDDECL)
#define IL2CPP_STRUCT_RegexParser_FWDDECL
#include <Modloader/app/structs/RegexParser__Class.h>
#endif
#undef IL2CPP_STRUCT_RegexParser_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexParser_DEFINED) && !defined(IL2CPP_STRUCT_RegexParser_FWDDECL)
#include <Modloader/app/structs/RegexParser.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RegexParser.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
