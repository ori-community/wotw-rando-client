#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Dithering_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Dithering_INITIALIZING
#if !defined(IL2CPP_STRUCT_Dithering_DEFINED)
#include <Modloader/app/structs/Dithering__Fields.h>
#if defined(IL2CPP_STRUCT_Dithering__Fields_DEFINED)
#define IL2CPP_STRUCT_Dithering_DEFINED
struct Dithering__Class;
struct Dithering {
    struct Dithering__Class* klass;
    MonitorData* monitor;
    struct Dithering__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Dithering_FWDDECL)
#define IL2CPP_STRUCT_Dithering_FWDDECL
#include <Modloader/app/structs/Dithering__Class.h>
#endif
#undef IL2CPP_STRUCT_Dithering_INITIALIZING
#if !defined(IL2CPP_STRUCT_Dithering_DEFINED) && !defined(IL2CPP_STRUCT_Dithering_FWDDECL)
#include <Modloader/app/structs/Dithering.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Dithering.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
