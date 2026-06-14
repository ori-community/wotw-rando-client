#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AspectRatioManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AspectRatioManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_AspectRatioManager_DEFINED)
#include <Modloader/app/structs/AspectRatioManager__Fields.h>
#if defined(IL2CPP_STRUCT_AspectRatioManager__Fields_DEFINED)
#define IL2CPP_STRUCT_AspectRatioManager_DEFINED
struct AspectRatioManager__Class;
struct AspectRatioManager {
    struct AspectRatioManager__Class* klass;
    MonitorData* monitor;
    struct AspectRatioManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AspectRatioManager_FWDDECL)
#define IL2CPP_STRUCT_AspectRatioManager_FWDDECL
#include <Modloader/app/structs/AspectRatioManager__Class.h>
#endif
#undef IL2CPP_STRUCT_AspectRatioManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_AspectRatioManager_DEFINED) && !defined(IL2CPP_STRUCT_AspectRatioManager_FWDDECL)
#include <Modloader/app/structs/AspectRatioManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AspectRatioManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
