#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RacesUiService_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RacesUiService_INITIALIZING
#if !defined(IL2CPP_STRUCT_RacesUiService_DEFINED)
#include <Modloader/app/structs/RacesUiService__Fields.h>
#if defined(IL2CPP_STRUCT_RacesUiService__Fields_DEFINED)
#define IL2CPP_STRUCT_RacesUiService_DEFINED
struct RacesUiService__Class;
struct RacesUiService {
    struct RacesUiService__Class* klass;
    MonitorData* monitor;
    struct RacesUiService__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RacesUiService_FWDDECL)
#define IL2CPP_STRUCT_RacesUiService_FWDDECL
#include <Modloader/app/structs/RacesUiService__Class.h>
#endif
#undef IL2CPP_STRUCT_RacesUiService_INITIALIZING
#if !defined(IL2CPP_STRUCT_RacesUiService_DEFINED) && !defined(IL2CPP_STRUCT_RacesUiService_FWDDECL)
#include <Modloader/app/structs/RacesUiService.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RacesUiService.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
