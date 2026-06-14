#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Halftone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Halftone_INITIALIZING
#if !defined(IL2CPP_STRUCT_Halftone_DEFINED)
#include <Modloader/app/structs/Halftone__Fields.h>
#if defined(IL2CPP_STRUCT_Halftone__Fields_DEFINED)
#define IL2CPP_STRUCT_Halftone_DEFINED
struct Halftone__Class;
struct Halftone {
    struct Halftone__Class* klass;
    MonitorData* monitor;
    struct Halftone__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Halftone_FWDDECL)
#define IL2CPP_STRUCT_Halftone_FWDDECL
#include <Modloader/app/structs/Halftone__Class.h>
#endif
#undef IL2CPP_STRUCT_Halftone_INITIALIZING
#if !defined(IL2CPP_STRUCT_Halftone_DEFINED) && !defined(IL2CPP_STRUCT_Halftone_FWDDECL)
#include <Modloader/app/structs/Halftone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Halftone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
