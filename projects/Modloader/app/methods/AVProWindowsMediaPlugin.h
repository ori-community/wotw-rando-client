#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AVProWindowsMediaPlugin.h>
#include <Modloader/app/structs/Single__Array.h>

namespace app::classes::AVProWindowsMediaPlugin {
    IL2CPP_REGISTER_METHOD(0x0312FFC0, bool, Init, )
    IL2CPP_REGISTER_METHOD(0x03130050, void, Deinit, )
    IL2CPP_REGISTER_METHOD(0x031300E0, void, SetUnityFeatures, bool support_external_textures)
    IL2CPP_REGISTER_METHOD(0x03130180, float, GetPluginVersion, )
    IL2CPP_REGISTER_METHOD(0x03130210, int32_t, GetInstanceHandle, )
    IL2CPP_REGISTER_METHOD(0x031302A0, void, FreeInstanceHandle, int32_t handle)
    IL2CPP_REGISTER_METHOD(
        0x03130340,
        bool,
        LoadMovie,
        int32_t handle,
        void* filename,
        bool play_from_memory,
        bool allow_native_format,
        bool allow_audio,
        bool use_audio_delay,
        bool use_audio_mixer,
        bool use_display_sync
    )
    IL2CPP_REGISTER_METHOD(
        0x03130440,
        bool,
        LoadMovieFromMemory,
        int32_t handle,
        void* movie_pointer,
        int64_t movie_length,
        bool allow_native_format,
        bool allow_audio,
        bool use_audio_delay,
        bool use_audio_mixer,
        bool use_display_sync
    )
    IL2CPP_REGISTER_METHOD(0x03130540, int32_t, GetWidth, int32_t handle)
    IL2CPP_REGISTER_METHOD(0x031305E0, int32_t, GetHeight, int32_t handle)
    IL2CPP_REGISTER_METHOD(0x03130680, float, GetFrameRate, int32_t handle)
    IL2CPP_REGISTER_METHOD(0x03130720, int64_t, GetFrameDuration, int32_t handle)
    IL2CPP_REGISTER_METHOD(0x031307C0, int32_t, GetFormat, int32_t handle)
    IL2CPP_REGISTER_METHOD(0x03130860, float, GetDurationSeconds, int32_t handle)
    IL2CPP_REGISTER_METHOD(0x03130900, uint32_t, GetDurationFrames, int32_t handle)
    IL2CPP_REGISTER_METHOD(0x031309A0, bool, IsOrientedTopDown, int32_t handle)
    IL2CPP_REGISTER_METHOD(0x03130A40, void, Play, int32_t handle)
    IL2CPP_REGISTER_METHOD(0x03130AE0, void, Pause, int32_t handle)
    IL2CPP_REGISTER_METHOD(0x03130B80, void, Stop, int32_t handle)
    IL2CPP_REGISTER_METHOD(0x03130C20, void, SeekUnit, int32_t handle, float position)
    IL2CPP_REGISTER_METHOD(0x03130CD0, void, SeekSeconds, int32_t handle, float position)
    IL2CPP_REGISTER_METHOD(0x03130D80, void, SeekFrames, int32_t handle, uint32_t position)
    IL2CPP_REGISTER_METHOD(0x03130E20, float, GetCurrentPositionSeconds, int32_t handle)
    IL2CPP_REGISTER_METHOD(0x03130EC0, uint32_t, GetCurrentPositionFrames, int32_t handle)
    IL2CPP_REGISTER_METHOD(0x03130F60, bool, IsLooping, int32_t handle)
    IL2CPP_REGISTER_METHOD(0x03131000, float, GetPlaybackRate, int32_t handle)
    IL2CPP_REGISTER_METHOD(0x031310A0, float, GetAudioBalance, int32_t handle)
    IL2CPP_REGISTER_METHOD(0x03131140, bool, IsFinishedPlaying, int32_t handle)
    IL2CPP_REGISTER_METHOD(0x031311E0, void, SetVolume, int32_t handle, float volume)
    IL2CPP_REGISTER_METHOD(0x03131290, void, SetLooping, int32_t handle, bool loop)
    IL2CPP_REGISTER_METHOD(0x03131340, void, SetDisplayFrameRange, int32_t handle, int32_t min, int32_t max)
    IL2CPP_REGISTER_METHOD(0x031313F0, void, SetPlaybackRate, int32_t handle, float rate)
    IL2CPP_REGISTER_METHOD(0x031314A0, void, SetAudioBalance, int32_t handle, float balance)
    IL2CPP_REGISTER_METHOD(0x03131550, void, SetAudioChannelMatrix, int32_t handle, app::Single__Array* values, int32_t num_values)
    IL2CPP_REGISTER_METHOD(0x03131610, void, SetAudioDelay, int32_t handle, int32_t ms)
    IL2CPP_REGISTER_METHOD(0x031316B0, bool, Update, int32_t handle)
    IL2CPP_REGISTER_METHOD(0x03131750, bool, IsNextFrameReadyForGrab, int32_t handle)
    IL2CPP_REGISTER_METHOD(0x031317F0, int32_t, GetLastFrameUploaded, int32_t handle)
    IL2CPP_REGISTER_METHOD(0x03131890, bool, UpdateTextureGL, int32_t handle, int32_t texture_i_d, int32_t* frame_number)
    IL2CPP_REGISTER_METHOD(0x03131950, bool, GetFramePixels, int32_t handle, void* data, int32_t buffer_width, int32_t buffer_height, int32_t* frame_number)
    IL2CPP_REGISTER_METHOD(0x03131A30, bool, SetTexturePointer, int32_t handle, void* data)
    IL2CPP_REGISTER_METHOD(0x03131AE0, void*, GetTexturePointer, int32_t handle)
    IL2CPP_REGISTER_METHOD(0x03131B80, float, GetCaptureFrameRate, int32_t handle)
    IL2CPP_REGISTER_METHOD(0x03131C20, void, SetFrameBufferSize, int32_t handle, int32_t read, int32_t write)
    IL2CPP_REGISTER_METHOD(0x03131CD0, int64_t, GetLastFrameBufferedTime, int32_t handle)
    IL2CPP_REGISTER_METHOD(0x03131D70, void*, GetLastFrameBuffered, int32_t handle)
    IL2CPP_REGISTER_METHOD(0x03131E10, void*, GetFrameFromBufferAtTime, int32_t handle, int64_t time)
    IL2CPP_REGISTER_METHOD(0x03131EC0, int32_t, GetNumFrameBuffers, int32_t handle)
    IL2CPP_REGISTER_METHOD(0x03131F60, void, GetFrameBufferTimes, int32_t handle, void* dest, int32_t dest_size_bytes)
    IL2CPP_REGISTER_METHOD(0x03132010, void, FlushFrameBuffers, int32_t handle)
    IL2CPP_REGISTER_METHOD(0x031320B0, int32_t, GetLastBufferUploaded, int32_t handle)
    IL2CPP_REGISTER_METHOD(0x03132150, int32_t, GetReadWriteBufferDistance, int32_t handle)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::AVProWindowsMediaPlugin* this_ptr)
} // namespace app::classes::AVProWindowsMediaPlugin
