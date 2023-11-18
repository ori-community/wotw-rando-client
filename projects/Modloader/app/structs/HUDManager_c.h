#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HUDManager_c_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HUDManager_c_INITIALIZING
#if !defined(IL2CPP_STRUCT_HUDManager_c_DEFINED)
#define IL2CPP_STRUCT_HUDManager_c_DEFINED
struct HUDManager_c__Class;
struct HUDManager_c {
    struct HUDManager_c__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_HUDManager_c_FWDDECL)
#define IL2CPP_STRUCT_HUDManager_c_FWDDECL
#include <Modloader/app/structs/HUDManager_c__Class.h>
#endif
#undef IL2CPP_STRUCT_HUDManager_c_INITIALIZING
#if !defined(IL2CPP_STRUCT_HUDManager_c_DEFINED) && !defined(IL2CPP_STRUCT_HUDManager_c_FWDDECL)
#include <Modloader/app/structs/HUDManager_c.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HUDManager_c.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
