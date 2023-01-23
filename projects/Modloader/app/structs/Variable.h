#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Variable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Variable_INITIALIZING
#if !defined(IL2CPP_STRUCT_Variable_DEFINED)
#include <Modloader/app/structs/Variable__Fields.h>
#if defined(IL2CPP_STRUCT_Variable__Fields_DEFINED)
#define IL2CPP_STRUCT_Variable_DEFINED
struct Variable__Class;
struct Variable {
    struct Variable__Class* klass;
    MonitorData* monitor;
    struct Variable__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Variable_FWDDECL)
#define IL2CPP_STRUCT_Variable_FWDDECL
#include <Modloader/app/structs/Variable__Class.h>
#endif
#undef IL2CPP_STRUCT_Variable_INITIALIZING
#if !defined(IL2CPP_STRUCT_Variable_DEFINED) && !defined(IL2CPP_STRUCT_Variable_FWDDECL)
#include <Modloader/app/structs/Variable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Variable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
