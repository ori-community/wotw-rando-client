#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UpdateSyncGuard_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UpdateSyncGuard_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateSyncGuard_DEFINED)
#define IL2CPP_STRUCT_UpdateSyncGuard_DEFINED
struct UpdateSyncGuard {
    int32_t m_fixedUpdateCount;
};
#endif
#if !defined(IL2CPP_STRUCT_UpdateSyncGuard_FWDDECL)
#define IL2CPP_STRUCT_UpdateSyncGuard_FWDDECL
#endif
#undef IL2CPP_STRUCT_UpdateSyncGuard_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateSyncGuard_DEFINED) && !defined(IL2CPP_STRUCT_UpdateSyncGuard_FWDDECL)
#include <Modloader/app/structs/UpdateSyncGuard.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UpdateSyncGuard.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
