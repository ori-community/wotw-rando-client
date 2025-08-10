#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AVProWindowsMedia.h>
#include <Modloader/app/structs/FilterMode__Enum.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Texture.h>
#include <Modloader/app/structs/TextureWrapMode__Enum.h>

namespace app::classes::AVProWindowsMedia {
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_Handle, app::AVProWindowsMedia* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String*, get_Filename, app::AVProWindowsMedia* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_Filename, app::AVProWindowsMedia* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FB970, int32_t, get_Width, app::AVProWindowsMedia* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB980, void, set_Width, app::AVProWindowsMedia* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x005C3FF0, int32_t, get_Height, app::AVProWindowsMedia* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005C4000, void, set_Height, app::AVProWindowsMedia* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x031276D0, float, get_AspectRatio, app::AVProWindowsMedia* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00446960, float, get_FrameRate, app::AVProWindowsMedia* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00724010, void, set_FrameRate, app::AVProWindowsMedia* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00447340, float, get_DurationSeconds, app::AVProWindowsMedia* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00447350, void, set_DurationSeconds, app::AVProWindowsMedia* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x003FC7F0, uint32_t, get_DurationFrames, app::AVProWindowsMedia* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00617D40, void, set_DurationFrames, app::AVProWindowsMedia* this_ptr, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x031276F0, uint32_t, get_LastFrame, app::AVProWindowsMedia* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E5A00, bool, get_IsPlaying, app::AVProWindowsMedia* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004E5A10, void, set_IsPlaying, app::AVProWindowsMedia* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x031277A0, void, set_Loop, app::AVProWindowsMedia* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x004E57D0, bool, get_Loop, app::AVProWindowsMedia* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03127850, void, set_AudioDelay, app::AVProWindowsMedia* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x004E57A0, int32_t, get_AudioDelay, app::AVProWindowsMedia* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03127900, void, set_Volume, app::AVProWindowsMedia* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00724040, float, get_Volume, app::AVProWindowsMedia* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031279B0, void, set_PlaybackRate, app::AVProWindowsMedia* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x03127A60, float, get_PlaybackRate, app::AVProWindowsMedia* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03127B00, float, get_PositionSeconds, app::AVProWindowsMedia* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03127BA0, void, set_PositionSeconds, app::AVProWindowsMedia* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x03127C50, uint32_t, get_PositionFrames, app::AVProWindowsMedia* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03127C70, void, set_PositionFrames, app::AVProWindowsMedia* this_ptr, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x03127D20, float, get_AudioBalance, app::AVProWindowsMedia* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03127DC0, void, set_AudioBalance, app::AVProWindowsMedia* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x03127E70, bool, get_IsFinishedPlaying, app::AVProWindowsMedia* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_RequiresFlipY, app::AVProWindowsMedia* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C6650, void, set_RequiresFlipY, app::AVProWindowsMedia* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x03127F10, app::Texture*, get_OutputTexture, app::AVProWindowsMedia* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03127C50, int32_t, get_DisplayFrame, app::AVProWindowsMedia* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x03127F30,
        bool,
        StartVideo,
        app::AVProWindowsMedia* this_ptr,
        app::String* filename,
        bool allow_native_format,
        bool use_b_t709,
        bool allow_audio,
        bool use_audio_delay,
        bool use_audio_mixer,
        bool use_display_sync,
        bool ignore_flips,
        app::FilterMode__Enum texture_filter_mode,
        app::TextureWrapMode__Enum texture_wrap_mode
    )
    IL2CPP_REGISTER_METHOD(
        0x031281C0,
        bool,
        StartVideoFromMemory,
        app::AVProWindowsMedia* this_ptr,
        app::String* name,
        void* movie_pointer,
        int64_t movie_length,
        bool allow_native_format,
        bool use_b_t709,
        bool allow_audio,
        bool use_audio_delay,
        bool use_audio_mixer,
        bool use_display_sync,
        bool ignore_flips,
        app::FilterMode__Enum texture_filter_mode,
        app::TextureWrapMode__Enum texture_wrap_mode
    )
    IL2CPP_REGISTER_METHOD(0x03128400, app::Material*, GetConversionMaterial, app::AVProWindowsMedia* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x03128420,
        void,
        CompleteVideoLoad,
        app::AVProWindowsMedia* this_ptr,
        bool use_b_t709,
        bool ignore_flips,
        app::FilterMode__Enum texture_filter_mode,
        app::TextureWrapMode__Enum texture_wrap_mode
    )
    IL2CPP_REGISTER_METHOD(0x03128D30, bool, StartAudio, app::AVProWindowsMedia* this_ptr, app::String* filename)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, PreRoll, app::AVProWindowsMedia* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03129190, bool, Update, app::AVProWindowsMedia* this_ptr, bool force)
    IL2CPP_REGISTER_METHOD(0x031293D0, void, Play, app::AVProWindowsMedia* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03129480, void, Pause, app::AVProWindowsMedia* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03129530, void, Rewind, app::AVProWindowsMedia* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031295E0, void, Dispose, app::AVProWindowsMedia* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03129610, void, SetFrameRange, app::AVProWindowsMedia* this_ptr, int32_t min, int32_t max)
    IL2CPP_REGISTER_METHOD(0x031296C0, void, ClearFrameRange, app::AVProWindowsMedia* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031296D0, void, Close, app::AVProWindowsMedia* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03129820, void, ctor, app::AVProWindowsMedia* this_ptr)
} // namespace app::classes::AVProWindowsMedia
