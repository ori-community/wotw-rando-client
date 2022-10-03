#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::PlayCharacterAnimation {
    IL2CPP_REGISTER_METHOD(0x01176D90, void, Perform, (app::PlayCharacterAnimation * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01177000, void, Stop, (app::PlayCharacterAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011770C0, bool, get_IsPerforming, (app::PlayCharacterAnimation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::PlayCharacterAnimation * this_ptr))
} // namespace app::classes::PlayCharacterAnimation
