#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UserStatsStoredCallback__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UserStatsStoredCallback__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserStatsStoredCallback__StaticFields_DEFINED)
#include <Modloader/app/structs/GCHandle.h>
#if defined(IL2CPP_STRUCT_GCHandle_DEFINED)
#define IL2CPP_STRUCT_UserStatsStoredCallback__StaticFields_DEFINED
struct Action_1_Steamworks_UserStatsStored_t_;
struct Dictionary_2_System_UInt64_System_Action_2__2;
struct CCallbackBase;
struct UserStatsStoredCallback__StaticFields {
    int32_t _size;
    struct Action_1_Steamworks_UserStatsStored_t_* _callbackAction;
    struct Dictionary_2_System_UInt64_System_Action_2__2* _callResultActions;
    void* _vtablePtr;
    struct CCallbackBase* _callbackBase;
    struct GCHandle _callbackBasePtr;
    uint64_t m_hAPICall;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UserStatsStoredCallback__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_UserStatsStoredCallback__StaticFields_FWDDECL
#include <Modloader/app/structs/Action_1_Steamworks_UserStatsStored_t_.h>
#include <Modloader/app/structs/CCallbackBase.h>
#include <Modloader/app/structs/Dictionary_2_System_UInt64_System_Action_2__2.h>
#endif
#undef IL2CPP_STRUCT_UserStatsStoredCallback__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserStatsStoredCallback__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_UserStatsStoredCallback__StaticFields_FWDDECL)
#include <Modloader/app/structs/UserStatsStoredCallback__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UserStatsStoredCallback__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
