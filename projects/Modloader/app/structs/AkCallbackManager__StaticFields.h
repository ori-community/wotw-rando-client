#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkCallbackManager__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkCallbackManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkCallbackManager__StaticFields_DEFINED)
#define IL2CPP_STRUCT_AkCallbackManager__StaticFields_DEFINED
struct AkEventCallbackInfo;
struct AkDynamicSequenceItemCallbackInfo;
struct AkMIDIEventCallbackInfo;
struct AkMarkerCallbackInfo;
struct AkDurationCallbackInfo;
struct AkMusicSyncCallbackInfo;
struct AkMusicPlaylistCallbackInfo;
struct AkAudioSourceChangeCallbackInfo;
struct AkMonitoringCallbackInfo;
struct AkBankCallbackInfo;
struct Dictionary_2_System_Int32_AkCallbackManager_EventCallbackPackage_;
struct Dictionary_2_System_Int32_AkCallbackManager_BankCallbackPackage_;
struct AkCallbackManager_EventCallbackPackage;
struct AkCallbackManager_MonitoringCallback;
struct AkCallbackManager_BGMCallbackPackage;
struct AkCallbackManager__StaticFields {
    bool _IsLoggingEnabled_k__BackingField;
    struct AkEventCallbackInfo* AkEventCallbackInfo;
    struct AkDynamicSequenceItemCallbackInfo* AkDynamicSequenceItemCallbackInfo;
    struct AkMIDIEventCallbackInfo* AkMIDIEventCallbackInfo;
    struct AkMarkerCallbackInfo* AkMarkerCallbackInfo;
    struct AkDurationCallbackInfo* AkDurationCallbackInfo;
    struct AkMusicSyncCallbackInfo* AkMusicSyncCallbackInfo;
    struct AkMusicPlaylistCallbackInfo* AkMusicPlaylistCallbackInfo;
    struct AkAudioSourceChangeCallbackInfo* AkAudioSourceChangeCallbackInfo;
    struct AkMonitoringCallbackInfo* AkMonitoringCallbackInfo;
    struct AkBankCallbackInfo* AkBankCallbackInfo;
    struct Dictionary_2_System_Int32_AkCallbackManager_EventCallbackPackage_* m_mapEventCallbacks;
    struct Dictionary_2_System_Int32_AkCallbackManager_BankCallbackPackage_* m_mapBankCallbacks;
    struct AkCallbackManager_EventCallbackPackage* m_LastAddedEventPackage;
    void* m_pNotifMem;
    struct AkCallbackManager_MonitoringCallback* m_MonitoringCB;
    struct AkCallbackManager_BGMCallbackPackage* ms_sourceChangeCallbackPkg;
};
#endif
#if !defined(IL2CPP_STRUCT_AkCallbackManager__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_AkCallbackManager__StaticFields_FWDDECL
#include <Modloader/app/structs/AkAudioSourceChangeCallbackInfo.h>
#include <Modloader/app/structs/AkBankCallbackInfo.h>
#include <Modloader/app/structs/AkCallbackManager_BGMCallbackPackage.h>
#include <Modloader/app/structs/AkCallbackManager_EventCallbackPackage.h>
#include <Modloader/app/structs/AkCallbackManager_MonitoringCallback.h>
#include <Modloader/app/structs/AkDurationCallbackInfo.h>
#include <Modloader/app/structs/AkDynamicSequenceItemCallbackInfo.h>
#include <Modloader/app/structs/AkEventCallbackInfo.h>
#include <Modloader/app/structs/AkMIDIEventCallbackInfo.h>
#include <Modloader/app/structs/AkMarkerCallbackInfo.h>
#include <Modloader/app/structs/AkMonitoringCallbackInfo.h>
#include <Modloader/app/structs/AkMusicPlaylistCallbackInfo.h>
#include <Modloader/app/structs/AkMusicSyncCallbackInfo.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_AkCallbackManager_BankCallbackPackage_.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_AkCallbackManager_EventCallbackPackage_.h>
#endif
#undef IL2CPP_STRUCT_AkCallbackManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkCallbackManager__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_AkCallbackManager__StaticFields_FWDDECL)
#include <Modloader/app/structs/AkCallbackManager__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkCallbackManager__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
