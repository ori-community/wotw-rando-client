#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IMoonSetupVisuals_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IMoonSetupVisuals_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMoonSetupVisuals_DEFINED)
#define IL2CPP_STRUCT_IMoonSetupVisuals_DEFINED
struct IMoonSetupVisuals__Class;
struct IMoonSetupVisuals {
    struct IMoonSetupVisuals__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IMoonSetupVisuals_FWDDECL)
#define IL2CPP_STRUCT_IMoonSetupVisuals_FWDDECL
#include <Modloader/app/structs/IMoonSetupVisuals__Class.h>
#endif
#undef IL2CPP_STRUCT_IMoonSetupVisuals_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMoonSetupVisuals_DEFINED) && !defined(IL2CPP_STRUCT_IMoonSetupVisuals_FWDDECL)
#include <Modloader/app/structs/IMoonSetupVisuals.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IMoonSetupVisuals.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
