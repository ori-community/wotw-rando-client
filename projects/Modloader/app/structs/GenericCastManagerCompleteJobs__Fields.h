#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GenericCastManagerCompleteJobs__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GenericCastManagerCompleteJobs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericCastManagerCompleteJobs__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/UpdateSyncGuard.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_UpdateSyncGuard_DEFINED)
#define IL2CPP_STRUCT_GenericCastManagerCompleteJobs__Fields_DEFINED
struct IGenericCastManager;
struct GenericCastManagerCompleteJobs__Fields {
    struct MonoBehaviour__Fields _;
    struct IGenericCastManager* Manager;
    struct UpdateSyncGuard sync;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GenericCastManagerCompleteJobs__Fields_FWDDECL)
#define IL2CPP_STRUCT_GenericCastManagerCompleteJobs__Fields_FWDDECL
#include <Modloader/app/structs/IGenericCastManager.h>
#endif
#undef IL2CPP_STRUCT_GenericCastManagerCompleteJobs__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericCastManagerCompleteJobs__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GenericCastManagerCompleteJobs__Fields_FWDDECL)
#include <Modloader/app/structs/GenericCastManagerCompleteJobs__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GenericCastManagerCompleteJobs__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
