#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Function_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Function_INITIALIZING
#if !defined(IL2CPP_STRUCT_Function_DEFINED)
#include <Modloader/app/structs/Function__Fields.h>
#if defined(IL2CPP_STRUCT_Function__Fields_DEFINED)
#define IL2CPP_STRUCT_Function_DEFINED
struct Function__Class;
struct Function {
    struct Function__Class* klass;
    MonitorData* monitor;
    struct Function__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Function_FWDDECL)
#define IL2CPP_STRUCT_Function_FWDDECL
#include <Modloader/app/structs/Function__Class.h>
#endif
#undef IL2CPP_STRUCT_Function_INITIALIZING
#if !defined(IL2CPP_STRUCT_Function_DEFINED) && !defined(IL2CPP_STRUCT_Function_FWDDECL)
#include <Modloader/app/structs/Function.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Function.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
