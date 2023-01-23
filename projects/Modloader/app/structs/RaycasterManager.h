#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaycasterManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaycasterManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaycasterManager_DEFINED)
#define IL2CPP_STRUCT_RaycasterManager_DEFINED
struct RaycasterManager__Class;
struct RaycasterManager {
    struct RaycasterManager__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_RaycasterManager_FWDDECL)
#define IL2CPP_STRUCT_RaycasterManager_FWDDECL
#include <Modloader/app/structs/RaycasterManager__Class.h>
#endif
#undef IL2CPP_STRUCT_RaycasterManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaycasterManager_DEFINED) && !defined(IL2CPP_STRUCT_RaycasterManager_FWDDECL)
#include <Modloader/app/structs/RaycasterManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaycasterManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
