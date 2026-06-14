#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpringVisuals_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpringVisuals_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpringVisuals_DEFINED)
#include <Modloader/app/structs/SpringVisuals__Fields.h>
#if defined(IL2CPP_STRUCT_SpringVisuals__Fields_DEFINED)
#define IL2CPP_STRUCT_SpringVisuals_DEFINED
struct SpringVisuals__Class;
struct SpringVisuals {
    struct SpringVisuals__Class* klass;
    MonitorData* monitor;
    struct SpringVisuals__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpringVisuals_FWDDECL)
#define IL2CPP_STRUCT_SpringVisuals_FWDDECL
#include <Modloader/app/structs/SpringVisuals__Class.h>
#endif
#undef IL2CPP_STRUCT_SpringVisuals_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpringVisuals_DEFINED) && !defined(IL2CPP_STRUCT_SpringVisuals_FWDDECL)
#include <Modloader/app/structs/SpringVisuals.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpringVisuals.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
