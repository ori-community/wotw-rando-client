#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::PlaySoundAction {
    IL2CPP_REGISTER_METHOD(0x0117AFA0, void, Perform, (app::PlaySoundAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0117B130, app::String*, get_AudioClipName, (app::PlaySoundAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0117B220, app::String*, GetNiceName, (app::PlaySoundAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0117B310, void, OnDestroy, (app::PlaySoundAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::PlaySoundAction * this_ptr))
} // namespace app::classes::PlaySoundAction
