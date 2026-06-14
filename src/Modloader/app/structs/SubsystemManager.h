#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SubsystemManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SubsystemManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_SubsystemManager_DEFINED)
#define IL2CPP_STRUCT_SubsystemManager_DEFINED
struct SubsystemManager__Class;
struct SubsystemManager {
    struct SubsystemManager__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SubsystemManager_FWDDECL)
#define IL2CPP_STRUCT_SubsystemManager_FWDDECL
#include <Modloader/app/structs/SubsystemManager__Class.h>
#endif
#undef IL2CPP_STRUCT_SubsystemManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_SubsystemManager_DEFINED) && !defined(IL2CPP_STRUCT_SubsystemManager_FWDDECL)
#include <Modloader/app/structs/SubsystemManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SubsystemManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
