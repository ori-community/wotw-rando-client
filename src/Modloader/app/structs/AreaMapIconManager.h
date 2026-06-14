#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AreaMapIconManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AreaMapIconManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_AreaMapIconManager_DEFINED)
#include <Modloader/app/structs/AreaMapIconManager__Fields.h>
#if defined(IL2CPP_STRUCT_AreaMapIconManager__Fields_DEFINED)
#define IL2CPP_STRUCT_AreaMapIconManager_DEFINED
struct AreaMapIconManager__Class;
struct AreaMapIconManager {
    struct AreaMapIconManager__Class* klass;
    MonitorData* monitor;
    struct AreaMapIconManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AreaMapIconManager_FWDDECL)
#define IL2CPP_STRUCT_AreaMapIconManager_FWDDECL
#include <Modloader/app/structs/AreaMapIconManager__Class.h>
#endif
#undef IL2CPP_STRUCT_AreaMapIconManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_AreaMapIconManager_DEFINED) && !defined(IL2CPP_STRUCT_AreaMapIconManager_FWDDECL)
#include <Modloader/app/structs/AreaMapIconManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AreaMapIconManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
