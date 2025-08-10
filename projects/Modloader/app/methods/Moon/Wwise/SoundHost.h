#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkCallbackInfo.h>
#include <Modloader/app/structs/ISoundListener.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/RTPC.h>
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/Switch_1.h>
#include <Modloader/app/structs/UpdateType__Enum.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Moon::Wwise::SoundHost {
    IL2CPP_REGISTER_METHOD(0x0270B840, bool, IsActiveVersion, app::SoundHost* this_ptr, int32_t version)
    IL2CPP_REGISTER_METHOD(0x008C5DB0, bool, get_IsActive, app::SoundHost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008C5DC0, void, set_IsActive, app::SoundHost* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x003FDCE0, int32_t, get_Version, app::SoundHost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008C5DD0, void, set_Version, app::SoundHost* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x0270B850, app::ISoundListener*, get_AsListener, app::SoundHost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0270B8D0, app::Vector3, get_Position, app::SoundHost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0270B960, app::Quaternion, get_Rotation, app::SoundHost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, uint64_t, get_GameObject, app::SoundHost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB60, uint64_t, get_Id, app::SoundHost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_Id, app::SoundHost* this_ptr, uint64_t value)
    IL2CPP_REGISTER_METHOD(0x0270B9F0, void, OnEnable, app::SoundHost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0270BAC0, void, OnDisable, app::SoundHost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0270BAE0, void, Activate, app::SoundHost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0270C050, void, OnAuxCountChanged, app::SoundHost* this_ptr, int32_t count)
    IL2CPP_REGISTER_METHOD(0x0270C110, void, Register, app::SoundHost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0270C1C0, void, Unregister, app::SoundHost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0270C270, void, RemovePlayingIDToStopOnDisable, app::SoundHost* this_ptr, app::AkCallbackInfo* info)
    IL2CPP_REGISTER_METHOD(0x0270C3A0, void, AddPlayingIDToStopOnDisable, app::SoundHost* this_ptr, uint32_t playing_i_d)
    IL2CPP_REGISTER_METHOD(0x0270C4A0, void, Deactivate, app::SoundHost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0270C680, void, OnDrawGizmos, app::SoundHost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0270C880, void, OnUpdate, app::SoundHost* this_ptr, float delta)
    IL2CPP_REGISTER_METHOD(0x0270C9C0, void, SetRTPC, app::SoundHost* this_ptr, app::RTPC* rtpc, float value)
    IL2CPP_REGISTER_METHOD(0x0270CA00, void, SetGlobalRTPC, app::RTPC* rtpc, float value)
    IL2CPP_REGISTER_METHOD(0x0270CA10, void, SetSwitch, app::SoundHost* this_ptr, app::Switch_1* w_switch)
    IL2CPP_REGISTER_METHOD(0x00597B10, app::UpdateType__Enum, get_UpdateType, app::SoundHost* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00597BB0, void, ctor, app::SoundHost* this_ptr)
} // namespace app::classes::Moon::Wwise::SoundHost
