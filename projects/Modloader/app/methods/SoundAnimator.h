#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SoundDescriptor.h>
#include <Modloader/app/structs/SoundAnimator.h>

namespace app::classes::SoundAnimator {
    IL2CPP_REGISTER_METHOD(0x00EE4F90, app::SoundDescriptor*, GetSoundDescriptor, (app::SoundAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EE5080, app::SoundDescriptor*, GetCachedSoundDescriptor, (app::SoundAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EE50B0, void, OnStartPlay, (app::SoundAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EE5360, void, OnStopPlay, (app::SoundAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (app::SoundAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EE5480, void, SampleValue, (app::SoundAnimator * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x00EE5600, float, ConvertTimeToLoopTime, (app::SoundAnimator * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x00EE5670, void, OnDisable, (app::SoundAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005DA240, bool, get_IsLooping, (app::SoundAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EE5790, float, get_Duration, (app::SoundAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EE57C0, float, get_SoundClipLength, (app::SoundAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, (app::SoundAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EE5A00, void, ctor, (app::SoundAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EE5A20, void, _OnStartPlay_b__14_0, (app::SoundAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EE5A20, void, _SampleValue_b__17_0, (app::SoundAnimator * this_ptr))
} // namespace app::classes::SoundAnimator
