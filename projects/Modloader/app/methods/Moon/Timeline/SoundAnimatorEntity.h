#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/SoundAnimatorEntity.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/SoundDescriptor.h>

namespace app::classes::Moon::Timeline::SoundAnimatorEntity {
    IL2CPP_REGISTER_METHOD(0x00D05230, app::GameObject*, get_ExternalTarget, (app::SoundAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEntityCreated, (app::SoundAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D05250, app::Transform*, get_EffectiveTransform, (app::SoundAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D05320, void, OnStartPlayback, (app::SoundAnimatorEntity * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00D05710, void, OnStopPlayback, (app::SoundAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D05730, void, OnUpdateEntity, (app::SoundAnimatorEntity * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SampleValue, (app::SoundAnimatorEntity * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00D05750, app::SoundDescriptor*, GetSoundDescriptor, (app::SoundAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D05830, bool, HasFinished, (app::SoundAnimatorEntity * this_ptr, int32_t event_id))
    IL2CPP_REGISTER_METHOD(0x00D058F0, void, ctor, (app::SoundAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A52470, void, _OnStartPlayback_b__17_0, (app::SoundAnimatorEntity * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04718D70, SoundAnimatorEntity__OnStartPlayback_b__17_0__MethodInfo)
} // namespace app::classes::Moon::Timeline::SoundAnimatorEntity
