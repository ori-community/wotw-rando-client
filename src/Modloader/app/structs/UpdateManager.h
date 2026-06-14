#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UpdateManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UpdateManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateManager_DEFINED)
#include <Modloader/app/structs/UpdateManager__Fields.h>
#if defined(IL2CPP_STRUCT_UpdateManager__Fields_DEFINED)
#define IL2CPP_STRUCT_UpdateManager_DEFINED
struct UpdateManager__Class;
struct UpdateManager {
    struct UpdateManager__Class* klass;
    MonitorData* monitor;
    struct UpdateManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UpdateManager_FWDDECL)
#define IL2CPP_STRUCT_UpdateManager_FWDDECL
#include <Modloader/app/structs/UpdateManager__Class.h>
#endif
#undef IL2CPP_STRUCT_UpdateManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateManager_DEFINED) && !defined(IL2CPP_STRUCT_UpdateManager_FWDDECL)
#include <Modloader/app/structs/UpdateManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UpdateManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
