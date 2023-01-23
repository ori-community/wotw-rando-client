#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Vignette_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Vignette_INITIALIZING
#if !defined(IL2CPP_STRUCT_Vignette_DEFINED)
#include <Modloader/app/structs/Vignette__Fields.h>
#if defined(IL2CPP_STRUCT_Vignette__Fields_DEFINED)
#define IL2CPP_STRUCT_Vignette_DEFINED
struct Vignette__Class;
struct Vignette {
    struct Vignette__Class* klass;
    MonitorData* monitor;
    struct Vignette__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Vignette_FWDDECL)
#define IL2CPP_STRUCT_Vignette_FWDDECL
#include <Modloader/app/structs/Vignette__Class.h>
#endif
#undef IL2CPP_STRUCT_Vignette_INITIALIZING
#if !defined(IL2CPP_STRUCT_Vignette_DEFINED) && !defined(IL2CPP_STRUCT_Vignette_FWDDECL)
#include <Modloader/app/structs/Vignette.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Vignette.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
