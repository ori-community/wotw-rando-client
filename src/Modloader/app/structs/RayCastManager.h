#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RayCastManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RayCastManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_RayCastManager_DEFINED)
#include <Modloader/app/structs/RayCastManager__Fields.h>
#if defined(IL2CPP_STRUCT_RayCastManager__Fields_DEFINED)
#define IL2CPP_STRUCT_RayCastManager_DEFINED
struct RayCastManager__Class;
struct RayCastManager {
    struct RayCastManager__Class* klass;
    MonitorData* monitor;
    struct RayCastManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RayCastManager_FWDDECL)
#define IL2CPP_STRUCT_RayCastManager_FWDDECL
#include <Modloader/app/structs/RayCastManager__Class.h>
#endif
#undef IL2CPP_STRUCT_RayCastManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_RayCastManager_DEFINED) && !defined(IL2CPP_STRUCT_RayCastManager_FWDDECL)
#include <Modloader/app/structs/RayCastManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RayCastManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
