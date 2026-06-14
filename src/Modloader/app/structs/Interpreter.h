#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Interpreter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Interpreter_INITIALIZING
#if !defined(IL2CPP_STRUCT_Interpreter_DEFINED)
#include <Modloader/app/structs/Interpreter__Fields.h>
#if defined(IL2CPP_STRUCT_Interpreter__Fields_DEFINED)
#define IL2CPP_STRUCT_Interpreter_DEFINED
struct Interpreter__Class;
struct Interpreter {
    struct Interpreter__Class* klass;
    MonitorData* monitor;
    struct Interpreter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Interpreter_FWDDECL)
#define IL2CPP_STRUCT_Interpreter_FWDDECL
#include <Modloader/app/structs/Interpreter__Class.h>
#endif
#undef IL2CPP_STRUCT_Interpreter_INITIALIZING
#if !defined(IL2CPP_STRUCT_Interpreter_DEFINED) && !defined(IL2CPP_STRUCT_Interpreter_FWDDECL)
#include <Modloader/app/structs/Interpreter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Interpreter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
