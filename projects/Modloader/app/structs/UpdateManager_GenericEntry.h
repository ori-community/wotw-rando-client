#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UpdateManager_GenericEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UpdateManager_GenericEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateManager_GenericEntry_DEFINED)
#include <Modloader/app/structs/UpdateManager_GenericEntry__Fields.h>
#if defined(IL2CPP_STRUCT_UpdateManager_GenericEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_UpdateManager_GenericEntry_DEFINED
struct UpdateManager_GenericEntry__Class;
struct UpdateManager_GenericEntry {
    struct UpdateManager_GenericEntry__Class* klass;
    MonitorData* monitor;
    struct UpdateManager_GenericEntry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UpdateManager_GenericEntry_FWDDECL)
#define IL2CPP_STRUCT_UpdateManager_GenericEntry_FWDDECL
#include <Modloader/app/structs/UpdateManager_GenericEntry__Class.h>
#endif
#undef IL2CPP_STRUCT_UpdateManager_GenericEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateManager_GenericEntry_DEFINED) && !defined(IL2CPP_STRUCT_UpdateManager_GenericEntry_FWDDECL)
#include <Modloader/app/structs/UpdateManager_GenericEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UpdateManager_GenericEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
