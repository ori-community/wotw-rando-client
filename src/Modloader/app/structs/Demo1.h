#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Demo1_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Demo1_INITIALIZING
#if !defined(IL2CPP_STRUCT_Demo1_DEFINED)
#include <Modloader/app/structs/Demo1__Fields.h>
#if defined(IL2CPP_STRUCT_Demo1__Fields_DEFINED)
#define IL2CPP_STRUCT_Demo1_DEFINED
struct Demo1__Class;
struct Demo1 {
    struct Demo1__Class* klass;
    MonitorData* monitor;
    struct Demo1__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Demo1_FWDDECL)
#define IL2CPP_STRUCT_Demo1_FWDDECL
#include <Modloader/app/structs/Demo1__Class.h>
#endif
#undef IL2CPP_STRUCT_Demo1_INITIALIZING
#if !defined(IL2CPP_STRUCT_Demo1_DEFINED) && !defined(IL2CPP_STRUCT_Demo1_FWDDECL)
#include <Modloader/app/structs/Demo1.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Demo1.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
