#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FastVignette_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FastVignette_INITIALIZING
#if !defined(IL2CPP_STRUCT_FastVignette_DEFINED)
#include <Modloader/app/structs/FastVignette__Fields.h>
#if defined(IL2CPP_STRUCT_FastVignette__Fields_DEFINED)
#define IL2CPP_STRUCT_FastVignette_DEFINED
struct FastVignette__Class;
struct FastVignette {
    struct FastVignette__Class* klass;
    MonitorData* monitor;
    struct FastVignette__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FastVignette_FWDDECL)
#define IL2CPP_STRUCT_FastVignette_FWDDECL
#include <Modloader/app/structs/FastVignette__Class.h>
#endif
#undef IL2CPP_STRUCT_FastVignette_INITIALIZING
#if !defined(IL2CPP_STRUCT_FastVignette_DEFINED) && !defined(IL2CPP_STRUCT_FastVignette_FWDDECL)
#include <Modloader/app/structs/FastVignette.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FastVignette.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
