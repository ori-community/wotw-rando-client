#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Demo2_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Demo2_INITIALIZING
#if !defined(IL2CPP_STRUCT_Demo2_DEFINED)
#include <Modloader/app/structs/Demo2__Fields.h>
#if defined(IL2CPP_STRUCT_Demo2__Fields_DEFINED)
#define IL2CPP_STRUCT_Demo2_DEFINED
struct Demo2__Class;
struct Demo2 {
    struct Demo2__Class* klass;
    MonitorData* monitor;
    struct Demo2__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Demo2_FWDDECL)
#define IL2CPP_STRUCT_Demo2_FWDDECL
#include <Modloader/app/structs/Demo2__Class.h>
#endif
#undef IL2CPP_STRUCT_Demo2_INITIALIZING
#if !defined(IL2CPP_STRUCT_Demo2_DEFINED) && !defined(IL2CPP_STRUCT_Demo2_FWDDECL)
#include <Modloader/app/structs/Demo2.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Demo2.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
