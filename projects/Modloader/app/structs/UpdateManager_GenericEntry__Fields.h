#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UpdateManager_GenericEntry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UpdateManager_GenericEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateManager_GenericEntry__Fields_DEFINED)
#include <Modloader/app/structs/UpdateManager_Entry__Fields.h>
#if defined(IL2CPP_STRUCT_UpdateManager_Entry__Fields_DEFINED)
#define IL2CPP_STRUCT_UpdateManager_GenericEntry__Fields_DEFINED
struct IUpdateHandler;
struct UpdateManager_GenericEntry__Fields {
    struct UpdateManager_Entry__Fields _;
    struct IUpdateHandler* GenericHandler;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UpdateManager_GenericEntry__Fields_FWDDECL)
#define IL2CPP_STRUCT_UpdateManager_GenericEntry__Fields_FWDDECL
#include <Modloader/app/structs/IUpdateHandler.h>
#endif
#undef IL2CPP_STRUCT_UpdateManager_GenericEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateManager_GenericEntry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UpdateManager_GenericEntry__Fields_FWDDECL)
#include <Modloader/app/structs/UpdateManager_GenericEntry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UpdateManager_GenericEntry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
