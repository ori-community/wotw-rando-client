#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LandOnVisuals_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LandOnVisuals_INITIALIZING
#if !defined(IL2CPP_STRUCT_LandOnVisuals_DEFINED)
#include <Modloader/app/structs/LandOnVisuals__Fields.h>
#if defined(IL2CPP_STRUCT_LandOnVisuals__Fields_DEFINED)
#define IL2CPP_STRUCT_LandOnVisuals_DEFINED
struct LandOnVisuals__Class;
struct LandOnVisuals {
    struct LandOnVisuals__Class* klass;
    MonitorData* monitor;
    struct LandOnVisuals__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LandOnVisuals_FWDDECL)
#define IL2CPP_STRUCT_LandOnVisuals_FWDDECL
#include <Modloader/app/structs/LandOnVisuals__Class.h>
#endif
#undef IL2CPP_STRUCT_LandOnVisuals_INITIALIZING
#if !defined(IL2CPP_STRUCT_LandOnVisuals_DEFINED) && !defined(IL2CPP_STRUCT_LandOnVisuals_FWDDECL)
#include <Modloader/app/structs/LandOnVisuals.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LandOnVisuals.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
