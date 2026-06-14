#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HUDManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HUDManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_HUDManager_DEFINED)
#include <Modloader/app/structs/HUDManager__Fields.h>
#if defined(IL2CPP_STRUCT_HUDManager__Fields_DEFINED)
#define IL2CPP_STRUCT_HUDManager_DEFINED
struct HUDManager__Class;
struct HUDManager {
    struct HUDManager__Class* klass;
    MonitorData* monitor;
    struct HUDManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HUDManager_FWDDECL)
#define IL2CPP_STRUCT_HUDManager_FWDDECL
#include <Modloader/app/structs/HUDManager__Class.h>
#endif
#undef IL2CPP_STRUCT_HUDManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_HUDManager_DEFINED) && !defined(IL2CPP_STRUCT_HUDManager_FWDDECL)
#include <Modloader/app/structs/HUDManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HUDManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
