#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ArtBuildController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ArtBuildController_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArtBuildController_DEFINED)
#include <Modloader/app/structs/ArtBuildController__Fields.h>
#if defined(IL2CPP_STRUCT_ArtBuildController__Fields_DEFINED)
#define IL2CPP_STRUCT_ArtBuildController_DEFINED
struct ArtBuildController__Class;
struct ArtBuildController {
    struct ArtBuildController__Class* klass;
    MonitorData* monitor;
    struct ArtBuildController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ArtBuildController_FWDDECL)
#define IL2CPP_STRUCT_ArtBuildController_FWDDECL
#include <Modloader/app/structs/ArtBuildController__Class.h>
#endif
#undef IL2CPP_STRUCT_ArtBuildController_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArtBuildController_DEFINED) && !defined(IL2CPP_STRUCT_ArtBuildController_FWDDECL)
#include <Modloader/app/structs/ArtBuildController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ArtBuildController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
