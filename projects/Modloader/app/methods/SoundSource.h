#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SoundSource.h>
#include <Modloader/app/structs/AkCallbackInfo.h>
#include <Modloader/app/structs/AkCallbackType__Enum.h>
#include <Modloader/app/structs/Func_1_Single_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RTPC.h>
#include <Modloader/app/structs/SelectableCategory__Enum.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/UpdateType__Enum.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SoundSource {
    IL2CPP_REGISTER_METHOD(0x00EED000, bool, get_IsPlaying, (app::SoundSource * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, set_IsPlaying, (app::SoundSource * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00EED020, void, OnPoolSpawned, (app::SoundSource * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EED030, void, OnPoolDespawned, (app::SoundSource * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EED060, void, EnsureSoundHost, (app::SoundSource * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EED1A0, void, OnEnable, (app::SoundSource * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EED250, void, Awake, (app::SoundSource * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EED2F0, void, OnDestroy, (app::SoundSource * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EED3B0, void, OnEnd, (app::SoundSource * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EED4B0, void, Start, (app::SoundSource * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EED570, void, OnDisable, (app::SoundSource * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EED630, void, Play_1, (app::SoundSource * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x00EED8F0, void, Play_2, (app::SoundSource * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EED9E0, void, Pause, (app::SoundSource * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EEDA80, void, OnUpdate, (app::SoundSource * this_ptr, float delta))
    IL2CPP_REGISTER_METHOD(0x00EEDB40, void, Stop, (app::SoundSource * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EEDB40, void, StopAndFadeOut, (app::SoundSource * this_ptr, float duration))
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::SelectableCategory__Enum, get_Category, (app::SoundSource * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EEDBB0, bool, get_IsSuspended, (app::SoundSource * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EEDBC0, void, set_IsSuspended, (app::SoundSource * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x003FD3F0, app::SuspendableMask__Enum, get_Mask, (app::SoundSource * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EEDBD0, void, set_Mask, (app::SoundSource * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x00EEDC80, void, AddRtpc, (app::SoundSource * this_ptr, app::RTPC* continous_sound_rtpc, app::Func_1_Single_* continous_sound_rtpc_get_value))
    IL2CPP_REGISTER_METHOD(0x00597B10, app::UpdateType__Enum, get_UpdateType, (app::SoundSource * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004FA630, void, ctor, (app::SoundSource * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EED3B0, void, _Play_b__18_0, (app::SoundSource * this_ptr, app::Object* cookie, app::AkCallbackType__Enum type, app::AkCallbackInfo* info))
} // namespace app::classes::SoundSource
