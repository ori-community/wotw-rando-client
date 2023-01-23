#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ContrastVignette_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ContrastVignette_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContrastVignette_DEFINED)
#include <Modloader/app/structs/ContrastVignette__Fields.h>
#if defined(IL2CPP_STRUCT_ContrastVignette__Fields_DEFINED)
#define IL2CPP_STRUCT_ContrastVignette_DEFINED
struct ContrastVignette__Class;
struct ContrastVignette {
    struct ContrastVignette__Class* klass;
    MonitorData* monitor;
    struct ContrastVignette__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ContrastVignette_FWDDECL)
#define IL2CPP_STRUCT_ContrastVignette_FWDDECL
#include <Modloader/app/structs/ContrastVignette__Class.h>
#endif
#undef IL2CPP_STRUCT_ContrastVignette_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContrastVignette_DEFINED) && !defined(IL2CPP_STRUCT_ContrastVignette_FWDDECL)
#include <Modloader/app/structs/ContrastVignette.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ContrastVignette.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
