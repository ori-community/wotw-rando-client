#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UpdateManager__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UpdateManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateManager__StaticFields_DEFINED)
#define IL2CPP_STRUCT_UpdateManager__StaticFields_DEFINED
struct Queue_1_Moon_Driver_UpdateManager_GenericEntry_;
struct Queue_1_Moon_Driver_UpdateManager_ExplicitEntry_;
struct UpdateManager_ActiveEntryComparer;
struct UpdateManager_UpdatedEntryComparer;
struct UpdateManager__StaticFields {
    bool EnableRegistrationCallstackTracking;
    bool DisableEntryManagement;
    struct Queue_1_Moon_Driver_UpdateManager_GenericEntry_* m_entryPool;
    struct Queue_1_Moon_Driver_UpdateManager_ExplicitEntry_* m_explicitPool;
    struct UpdateManager_ActiveEntryComparer* m_activeEntryCmp;
    struct UpdateManager_UpdatedEntryComparer* m_updatedEntryCmp;
};
#endif
#if !defined(IL2CPP_STRUCT_UpdateManager__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_UpdateManager__StaticFields_FWDDECL
#include <Modloader/app/structs/Queue_1_Moon_Driver_UpdateManager_ExplicitEntry_.h>
#include <Modloader/app/structs/Queue_1_Moon_Driver_UpdateManager_GenericEntry_.h>
#include <Modloader/app/structs/UpdateManager_ActiveEntryComparer.h>
#include <Modloader/app/structs/UpdateManager_UpdatedEntryComparer.h>
#endif
#undef IL2CPP_STRUCT_UpdateManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateManager__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_UpdateManager__StaticFields_FWDDECL)
#include <Modloader/app/structs/UpdateManager__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UpdateManager__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
