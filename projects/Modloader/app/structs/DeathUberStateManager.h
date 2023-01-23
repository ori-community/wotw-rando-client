#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeathUberStateManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeathUberStateManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeathUberStateManager_DEFINED)
#include <Modloader/app/structs/DeathUberStateManager__Fields.h>
#if defined(IL2CPP_STRUCT_DeathUberStateManager__Fields_DEFINED)
#define IL2CPP_STRUCT_DeathUberStateManager_DEFINED
struct DeathUberStateManager__Class;
struct DeathUberStateManager {
    struct DeathUberStateManager__Class* klass;
    MonitorData* monitor;
    struct DeathUberStateManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DeathUberStateManager_FWDDECL)
#define IL2CPP_STRUCT_DeathUberStateManager_FWDDECL
#include <Modloader/app/structs/DeathUberStateManager__Class.h>
#endif
#undef IL2CPP_STRUCT_DeathUberStateManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeathUberStateManager_DEFINED) && !defined(IL2CPP_STRUCT_DeathUberStateManager_FWDDECL)
#include <Modloader/app/structs/DeathUberStateManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeathUberStateManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
