#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Grayscale_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Grayscale_INITIALIZING
#if !defined(IL2CPP_STRUCT_Grayscale_DEFINED)
#include <Modloader/app/structs/Grayscale__Fields.h>
#if defined(IL2CPP_STRUCT_Grayscale__Fields_DEFINED)
#define IL2CPP_STRUCT_Grayscale_DEFINED
struct Grayscale__Class;
struct Grayscale {
    struct Grayscale__Class* klass;
    MonitorData* monitor;
    struct Grayscale__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Grayscale_FWDDECL)
#define IL2CPP_STRUCT_Grayscale_FWDDECL
#include <Modloader/app/structs/Grayscale__Class.h>
#endif
#undef IL2CPP_STRUCT_Grayscale_INITIALIZING
#if !defined(IL2CPP_STRUCT_Grayscale_DEFINED) && !defined(IL2CPP_STRUCT_Grayscale_FWDDECL)
#include <Modloader/app/structs/Grayscale.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Grayscale.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
