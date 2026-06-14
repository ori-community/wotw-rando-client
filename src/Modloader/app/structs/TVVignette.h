#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TVVignette_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TVVignette_INITIALIZING
#if !defined(IL2CPP_STRUCT_TVVignette_DEFINED)
#include <Modloader/app/structs/TVVignette__Fields.h>
#if defined(IL2CPP_STRUCT_TVVignette__Fields_DEFINED)
#define IL2CPP_STRUCT_TVVignette_DEFINED
struct TVVignette__Class;
struct TVVignette {
    struct TVVignette__Class* klass;
    MonitorData* monitor;
    struct TVVignette__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TVVignette_FWDDECL)
#define IL2CPP_STRUCT_TVVignette_FWDDECL
#include <Modloader/app/structs/TVVignette__Class.h>
#endif
#undef IL2CPP_STRUCT_TVVignette_INITIALIZING
#if !defined(IL2CPP_STRUCT_TVVignette_DEFINED) && !defined(IL2CPP_STRUCT_TVVignette_FWDDECL)
#include <Modloader/app/structs/TVVignette.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TVVignette.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
