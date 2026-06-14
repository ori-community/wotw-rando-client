#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StomperVisuals_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StomperVisuals_INITIALIZING
#if !defined(IL2CPP_STRUCT_StomperVisuals_DEFINED)
#include <Modloader/app/structs/StomperVisuals__Fields.h>
#if defined(IL2CPP_STRUCT_StomperVisuals__Fields_DEFINED)
#define IL2CPP_STRUCT_StomperVisuals_DEFINED
struct StomperVisuals__Class;
struct StomperVisuals {
    struct StomperVisuals__Class* klass;
    MonitorData* monitor;
    struct StomperVisuals__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StomperVisuals_FWDDECL)
#define IL2CPP_STRUCT_StomperVisuals_FWDDECL
#include <Modloader/app/structs/StomperVisuals__Class.h>
#endif
#undef IL2CPP_STRUCT_StomperVisuals_INITIALIZING
#if !defined(IL2CPP_STRUCT_StomperVisuals_DEFINED) && !defined(IL2CPP_STRUCT_StomperVisuals_FWDDECL)
#include <Modloader/app/structs/StomperVisuals.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StomperVisuals.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
