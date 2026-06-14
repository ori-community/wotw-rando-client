#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RegexInterpreter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RegexInterpreter_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexInterpreter_DEFINED)
#include <Modloader/app/structs/RegexInterpreter__Fields.h>
#if defined(IL2CPP_STRUCT_RegexInterpreter__Fields_DEFINED)
#define IL2CPP_STRUCT_RegexInterpreter_DEFINED
struct RegexInterpreter__Class;
struct RegexInterpreter {
    struct RegexInterpreter__Class* klass;
    MonitorData* monitor;
    struct RegexInterpreter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RegexInterpreter_FWDDECL)
#define IL2CPP_STRUCT_RegexInterpreter_FWDDECL
#include <Modloader/app/structs/RegexInterpreter__Class.h>
#endif
#undef IL2CPP_STRUCT_RegexInterpreter_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexInterpreter_DEFINED) && !defined(IL2CPP_STRUCT_RegexInterpreter_FWDDECL)
#include <Modloader/app/structs/RegexInterpreter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RegexInterpreter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
