#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UpdateManager_ExplicitEntry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UpdateManager_ExplicitEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateManager_ExplicitEntry__Fields_DEFINED)
#include <Modloader/app/structs/UpdateManager_Entry__Fields.h>
#include <Modloader/app/structs/UpdateType__Enum.h>
#if defined(IL2CPP_STRUCT_UpdateManager_Entry__Fields_DEFINED) && defined(IL2CPP_STRUCT_UpdateType__Enum_DEFINED)
#define IL2CPP_STRUCT_UpdateManager_ExplicitEntry__Fields_DEFINED
struct IExplicitUpdateHandler;
struct IExplicitFixedUpdateHandler;
struct IExplicitLateUpdateHandler;
struct IExplicitUpdateHandlerBase;
struct UpdateManager_ExplicitEntry__Fields {
    struct UpdateManager_Entry__Fields _;
    struct IExplicitUpdateHandler* m_updateHandler;
    struct IExplicitFixedUpdateHandler* m_fixedUpdateHandler;
    struct IExplicitLateUpdateHandler* m_lateUpdateHandler;
    struct IExplicitUpdateHandlerBase* ExplicitHandler;
    UpdateType__Enum UpdateType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UpdateManager_ExplicitEntry__Fields_FWDDECL)
#define IL2CPP_STRUCT_UpdateManager_ExplicitEntry__Fields_FWDDECL
#include <Modloader/app/structs/IExplicitFixedUpdateHandler.h>
#include <Modloader/app/structs/IExplicitLateUpdateHandler.h>
#include <Modloader/app/structs/IExplicitUpdateHandler.h>
#include <Modloader/app/structs/IExplicitUpdateHandlerBase.h>
#endif
#undef IL2CPP_STRUCT_UpdateManager_ExplicitEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateManager_ExplicitEntry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UpdateManager_ExplicitEntry__Fields_FWDDECL)
#include <Modloader/app/structs/UpdateManager_ExplicitEntry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UpdateManager_ExplicitEntry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
