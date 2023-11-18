#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InitArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InitArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_InitArgs_DEFINED)
#include <Modloader/app/structs/InitArgs__Fields.h>
#if defined(IL2CPP_STRUCT_InitArgs__Fields_DEFINED)
#define IL2CPP_STRUCT_InitArgs_DEFINED
struct InitArgs__Class;
struct InitArgs {
    struct InitArgs__Class* klass;
    MonitorData* monitor;
    struct InitArgs__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InitArgs_FWDDECL)
#define IL2CPP_STRUCT_InitArgs_FWDDECL
#include <Modloader/app/structs/InitArgs__Class.h>
#endif
#undef IL2CPP_STRUCT_InitArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_InitArgs_DEFINED) && !defined(IL2CPP_STRUCT_InitArgs_FWDDECL)
#include <Modloader/app/structs/InitArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InitArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
