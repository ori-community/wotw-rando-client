#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AVProWindowsMedia.h>
#include <Modloader/app/structs/AVProWindowsMediaMovie.h>
#include <Modloader/app/structs/FilterMode__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Texture.h>
#include <Modloader/app/structs/TextureWrapMode__Enum.h>

namespace app::classes::AVProWindowsMediaMovie {
    IL2CPP_REGISTER_METHOD(0x0312E3B0, app::Texture*, get_OutputTexture, app::AVProWindowsMediaMovie* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::AVProWindowsMedia*, get_MovieInstance, app::AVProWindowsMediaMovie* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0312E3D0, void, Start, app::AVProWindowsMediaMovie* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0312E4E0, bool, LoadMovie, app::AVProWindowsMediaMovie* this_ptr, bool auto_play)
    IL2CPP_REGISTER_METHOD(
        0x0312E7A0,
        bool,
        LoadMovieFromMemory,
        app::AVProWindowsMediaMovie* this_ptr,
        bool auto_play,
        app::String* name,
        void* movie_pointer,
        int64_t movie_length,
        app::FilterMode__Enum texture_filter_mode,
        app::TextureWrapMode__Enum texture_wrap_mode
    )
    IL2CPP_REGISTER_METHOD(0x0312EA40, void, Update, app::AVProWindowsMediaMovie* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0057BAD0, void, Play, app::AVProWindowsMediaMovie* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0312EC90, void, Pause, app::AVProWindowsMediaMovie* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0312ECB0, int32_t, get_NumClips, app::AVProWindowsMediaMovie* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0312ED40, app::String*, GetClipName, app::AVProWindowsMediaMovie* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x0312EE10, void, ClearClips, app::AVProWindowsMediaMovie* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0312EEE0, void, AddClip, app::AVProWindowsMediaMovie* this_ptr, app::String* name, int32_t in_point, int32_t out_point)
    IL2CPP_REGISTER_METHOD(0x0312F0A0, app::String*, GetCurrentClipName, app::AVProWindowsMediaMovie* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0312F140, void, LoadClips, app::AVProWindowsMediaMovie* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0312F2C0, void, ResetClip, app::AVProWindowsMediaMovie* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0312F2F0, void, PlayClip, app::AVProWindowsMediaMovie* this_ptr, app::String* name, bool loop, bool start_paused)
    IL2CPP_REGISTER_METHOD(0x0312F510, void, UnloadMovie, app::AVProWindowsMediaMovie* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015A1590, void, OnDestroy, app::AVProWindowsMediaMovie* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0312F560, app::String*, GetFilePath, app::AVProWindowsMediaMovie* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0312F710, void, ctor, app::AVProWindowsMediaMovie* this_ptr)
} // namespace app::classes::AVProWindowsMediaMovie
