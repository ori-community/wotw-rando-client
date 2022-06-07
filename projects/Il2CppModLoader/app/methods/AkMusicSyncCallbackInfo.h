#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::AkMusicSyncCallbackInfo {
    IL2CPP_REGISTER_METHOD(0x01882FF0, void, ctor_1, (app::AkMusicSyncCallbackInfo * this_ptr, void * c_ptr, bool c_memory_own))
    IL2CPP_REGISTER_METHOD(0x018830B0, void *, getCPtr, (app::AkMusicSyncCallbackInfo * obj))
    IL2CPP_REGISTER_METHOD(0x01883140, void, setCPtr, (app::AkMusicSyncCallbackInfo * this_ptr, void * c_ptr))
    IL2CPP_REGISTER_METHOD(0x01883210, void, Finalize, (app::AkMusicSyncCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018832B0, void, Dispose, (app::AkMusicSyncCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018834D0, uint32_t, get_playingID, (app::AkMusicSyncCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018835F0, int32_t, get_segmentInfo_iCurrentPosition, (app::AkMusicSyncCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01883710, int32_t, get_segmentInfo_iPreEntryDuration, (app::AkMusicSyncCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01883830, int32_t, get_segmentInfo_iActiveDuration, (app::AkMusicSyncCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01883950, int32_t, get_segmentInfo_iPostExitDuration, (app::AkMusicSyncCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01883A70, int32_t, get_segmentInfo_iRemainingLookAheadTime, (app::AkMusicSyncCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01883B90, float, get_segmentInfo_fBeatDuration, (app::AkMusicSyncCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01883CB0, float, get_segmentInfo_fBarDuration, (app::AkMusicSyncCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01883DD0, float, get_segmentInfo_fGridDuration, (app::AkMusicSyncCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01883EF0, float, get_segmentInfo_fGridOffset, (app::AkMusicSyncCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01884010, app::AkCallbackType__Enum, get_musicSyncType, (app::AkMusicSyncCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01884130, app::String *, get_userCueName, (app::AkMusicSyncCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01884280, void, ctor_2, (app::AkMusicSyncCallbackInfo * this_ptr))
}
