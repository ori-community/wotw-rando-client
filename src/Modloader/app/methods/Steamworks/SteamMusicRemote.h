#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AudioPlayback_Status__Enum.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Steamworks::SteamMusicRemote {
    IL2CPP_REGISTER_METHOD(0x0278C000, bool, RegisterSteamMusicRemote, app::String* pch_name)
    IL2CPP_REGISTER_METHOD(0x0278C2E0, bool, DeregisterSteamMusicRemote, )
    IL2CPP_REGISTER_METHOD(0x0278C390, bool, BIsCurrentMusicRemote, )
    IL2CPP_REGISTER_METHOD(0x0278C440, bool, BActivationSuccess, bool b_value)
    IL2CPP_REGISTER_METHOD(0x0278C500, bool, SetDisplayName, app::String* pch_display_name)
    IL2CPP_REGISTER_METHOD(0x0278C7E0, bool, SetPNGIcon_64x64, app::Byte__Array* pv_buffer, uint32_t cb_buffer_length)
    IL2CPP_REGISTER_METHOD(0x0278C8B0, bool, EnablePlayPrevious, bool b_value)
    IL2CPP_REGISTER_METHOD(0x0278C970, bool, EnablePlayNext, bool b_value)
    IL2CPP_REGISTER_METHOD(0x0278CA30, bool, EnableShuffled, bool b_value)
    IL2CPP_REGISTER_METHOD(0x0278CAF0, bool, EnableLooped, bool b_value)
    IL2CPP_REGISTER_METHOD(0x0278CBB0, bool, EnableQueue, bool b_value)
    IL2CPP_REGISTER_METHOD(0x0278CC70, bool, EnablePlaylists, bool b_value)
    IL2CPP_REGISTER_METHOD(0x0278CD30, bool, UpdatePlaybackStatus, app::AudioPlayback_Status__Enum n_status)
    IL2CPP_REGISTER_METHOD(0x0278CDF0, bool, UpdateShuffled, bool b_value)
    IL2CPP_REGISTER_METHOD(0x0278CEB0, bool, UpdateLooped, bool b_value)
    IL2CPP_REGISTER_METHOD(0x0278CF70, bool, UpdateVolume, float fl_value)
    IL2CPP_REGISTER_METHOD(0x0278D030, bool, CurrentEntryWillChange, )
    IL2CPP_REGISTER_METHOD(0x0278D0E0, bool, CurrentEntryIsAvailable, bool b_available)
    IL2CPP_REGISTER_METHOD(0x0278D1A0, bool, UpdateCurrentEntryText, app::String* pch_text)
    IL2CPP_REGISTER_METHOD(0x0278D480, bool, UpdateCurrentEntryElapsedSeconds, int32_t n_value)
    IL2CPP_REGISTER_METHOD(0x0278D540, bool, UpdateCurrentEntryCoverArt, app::Byte__Array* pv_buffer, uint32_t cb_buffer_length)
    IL2CPP_REGISTER_METHOD(0x0278D610, bool, CurrentEntryDidChange, )
    IL2CPP_REGISTER_METHOD(0x0278D6C0, bool, QueueWillChange, )
    IL2CPP_REGISTER_METHOD(0x0278D770, bool, ResetQueueEntries, )
    IL2CPP_REGISTER_METHOD(0x0278D820, bool, SetQueueEntry, int32_t n_i_d, int32_t n_position, app::String* pch_entry_text)
    IL2CPP_REGISTER_METHOD(0x0278DB20, bool, SetCurrentQueueEntry, int32_t n_i_d)
    IL2CPP_REGISTER_METHOD(0x0278DBE0, bool, QueueDidChange, )
    IL2CPP_REGISTER_METHOD(0x0278DC90, bool, PlaylistWillChange, )
    IL2CPP_REGISTER_METHOD(0x0278DD40, bool, ResetPlaylistEntries, )
    IL2CPP_REGISTER_METHOD(0x0278DDF0, bool, SetPlaylistEntry, int32_t n_i_d, int32_t n_position, app::String* pch_entry_text)
    IL2CPP_REGISTER_METHOD(0x0278E0F0, bool, SetCurrentPlaylistEntry, int32_t n_i_d)
    IL2CPP_REGISTER_METHOD(0x0278E1B0, bool, PlaylistDidChange, )
} // namespace app::classes::Steamworks::SteamMusicRemote
