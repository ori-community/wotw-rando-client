#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DepthOfFieldController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DepthOfFieldController_INITIALIZING
#if !defined(IL2CPP_STRUCT_DepthOfFieldController_DEFINED)
#include <Modloader/app/structs/DepthOfFieldController__Fields.h>
#if defined(IL2CPP_STRUCT_DepthOfFieldController__Fields_DEFINED)
#define IL2CPP_STRUCT_DepthOfFieldController_DEFINED
struct DepthOfFieldController__Class;
struct DepthOfFieldController {
    struct DepthOfFieldController__Class* klass;
    MonitorData* monitor;
    struct DepthOfFieldController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DepthOfFieldController_FWDDECL)
#define IL2CPP_STRUCT_DepthOfFieldController_FWDDECL
#include <Modloader/app/structs/DepthOfFieldController__Class.h>
#endif
#undef IL2CPP_STRUCT_DepthOfFieldController_INITIALIZING
#if !defined(IL2CPP_STRUCT_DepthOfFieldController_DEFINED) && !defined(IL2CPP_STRUCT_DepthOfFieldController_FWDDECL)
#include <Modloader/app/structs/DepthOfFieldController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DepthOfFieldController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
