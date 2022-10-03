#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SoundCompositionTransition {
    IL2CPP_REGISTER_METHOD(0x00EE7A80, float, get_EndPreviousSoundTime, (app::SoundCompositionTransition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EE7AB0, float, get_EndTransitionTime, (app::SoundCompositionTransition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EE7BC0, void, ctor, (app::SoundCompositionTransition * this_ptr))
} // namespace app::classes::SoundCompositionTransition
