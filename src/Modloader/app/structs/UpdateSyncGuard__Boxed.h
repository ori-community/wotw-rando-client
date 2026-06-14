#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UpdateSyncGuard__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UpdateSyncGuard__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateSyncGuard__Boxed_DEFINED)
#include <Modloader/app/structs/UpdateSyncGuard.h>
#if defined(IL2CPP_STRUCT_UpdateSyncGuard_DEFINED)
#define IL2CPP_STRUCT_UpdateSyncGuard__Boxed_DEFINED
struct UpdateSyncGuard__Class;
struct UpdateSyncGuard__Boxed {
    struct UpdateSyncGuard__Class* klass;
    MonitorData* monitor;
    struct UpdateSyncGuard fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UpdateSyncGuard__Boxed_FWDDECL)
#define IL2CPP_STRUCT_UpdateSyncGuard__Boxed_FWDDECL
#include <Modloader/app/structs/UpdateSyncGuard__Class.h>
#endif
#undef IL2CPP_STRUCT_UpdateSyncGuard__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateSyncGuard__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_UpdateSyncGuard__Boxed_FWDDECL)
#include <Modloader/app/structs/UpdateSyncGuard__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UpdateSyncGuard__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
