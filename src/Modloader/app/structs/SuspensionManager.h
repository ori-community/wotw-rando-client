#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SuspensionManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SuspensionManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_SuspensionManager_DEFINED)
#define IL2CPP_STRUCT_SuspensionManager_DEFINED
struct SuspensionManager__Class;
struct SuspensionManager {
    struct SuspensionManager__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SuspensionManager_FWDDECL)
#define IL2CPP_STRUCT_SuspensionManager_FWDDECL
#include <Modloader/app/structs/SuspensionManager__Class.h>
#endif
#undef IL2CPP_STRUCT_SuspensionManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_SuspensionManager_DEFINED) && !defined(IL2CPP_STRUCT_SuspensionManager_FWDDECL)
#include <Modloader/app/structs/SuspensionManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SuspensionManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
