#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Contour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Contour_INITIALIZING
#if !defined(IL2CPP_STRUCT_Contour_DEFINED)
#include <Modloader/app/structs/Contour__Fields.h>
#if defined(IL2CPP_STRUCT_Contour__Fields_DEFINED)
#define IL2CPP_STRUCT_Contour_DEFINED
struct Contour__Class;
struct Contour {
    struct Contour__Class* klass;
    MonitorData* monitor;
    struct Contour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Contour_FWDDECL)
#define IL2CPP_STRUCT_Contour_FWDDECL
#include <Modloader/app/structs/Contour__Class.h>
#endif
#undef IL2CPP_STRUCT_Contour_INITIALIZING
#if !defined(IL2CPP_STRUCT_Contour_DEFINED) && !defined(IL2CPP_STRUCT_Contour_FWDDECL)
#include <Modloader/app/structs/Contour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Contour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
