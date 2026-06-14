#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HitStopManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HitStopManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_HitStopManager_DEFINED)
#define IL2CPP_STRUCT_HitStopManager_DEFINED
struct HitStopManager__Class;
struct HitStopManager {
    struct HitStopManager__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_HitStopManager_FWDDECL)
#define IL2CPP_STRUCT_HitStopManager_FWDDECL
#include <Modloader/app/structs/HitStopManager__Class.h>
#endif
#undef IL2CPP_STRUCT_HitStopManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_HitStopManager_DEFINED) && !defined(IL2CPP_STRUCT_HitStopManager_FWDDECL)
#include <Modloader/app/structs/HitStopManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HitStopManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
