#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MovieTextureController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MovieTextureController_INITIALIZING
#if !defined(IL2CPP_STRUCT_MovieTextureController_DEFINED)
#include <Modloader/app/structs/MovieTextureController__Fields.h>
#if defined(IL2CPP_STRUCT_MovieTextureController__Fields_DEFINED)
#define IL2CPP_STRUCT_MovieTextureController_DEFINED
struct MovieTextureController__Class;
struct MovieTextureController {
    struct MovieTextureController__Class* klass;
    MonitorData* monitor;
    struct MovieTextureController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MovieTextureController_FWDDECL)
#define IL2CPP_STRUCT_MovieTextureController_FWDDECL
#include <Modloader/app/structs/MovieTextureController__Class.h>
#endif
#undef IL2CPP_STRUCT_MovieTextureController_INITIALIZING
#if !defined(IL2CPP_STRUCT_MovieTextureController_DEFINED) && !defined(IL2CPP_STRUCT_MovieTextureController_FWDDECL)
#include <Modloader/app/structs/MovieTextureController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MovieTextureController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
