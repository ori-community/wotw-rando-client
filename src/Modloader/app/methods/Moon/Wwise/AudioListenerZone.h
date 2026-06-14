#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AudioListenerZone.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::Wwise::AudioListenerZone {
    IL2CPP_REGISTER_METHOD(0x02709950, app::String*, get_GizmoText, app::AudioListenerZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027099E0, void, OnEnable, app::AudioListenerZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00447380, void, OnDisable, app::AudioListenerZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::AudioListenerZone* this_ptr)
} // namespace app::classes::Moon::Wwise::AudioListenerZone
