#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WwiseSyncProcessor__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WwiseSyncProcessor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WwiseSyncProcessor__Fields_DEFINED)
#define IL2CPP_STRUCT_WwiseSyncProcessor__Fields_DEFINED
struct WwiseSyncProcessor_RtpcSyncTask__Array;
struct PositionSyncTask__Array;
struct ZoneProcessor;
struct IListenerSyncProcessor;
struct __declspec(align(8)) WwiseSyncProcessor__Fields {
    struct WwiseSyncProcessor_RtpcSyncTask__Array* m_rtpcSyncTasks;
    struct PositionSyncTask__Array* m_positionSyncTasks;
    struct ZoneProcessor* m_zoneProcessor;
    struct IListenerSyncProcessor* m_listenerSyncProcessor;
    int32_t m_validPositionSyncsSize;
    int32_t m_validRTPCSyncTaskSize;
};
#endif
#if !defined(IL2CPP_STRUCT_WwiseSyncProcessor__Fields_FWDDECL)
#define IL2CPP_STRUCT_WwiseSyncProcessor__Fields_FWDDECL
#include <Modloader/app/structs/IListenerSyncProcessor.h>
#include <Modloader/app/structs/PositionSyncTask__Array.h>
#include <Modloader/app/structs/WwiseSyncProcessor_RtpcSyncTask__Array.h>
#include <Modloader/app/structs/ZoneProcessor.h>
#endif
#undef IL2CPP_STRUCT_WwiseSyncProcessor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WwiseSyncProcessor__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WwiseSyncProcessor__Fields_FWDDECL)
#include <Modloader/app/structs/WwiseSyncProcessor__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WwiseSyncProcessor__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
