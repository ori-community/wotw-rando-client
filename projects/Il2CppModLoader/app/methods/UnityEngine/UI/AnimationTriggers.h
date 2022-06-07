#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::UI::AnimationTriggers {
    IL2CPP_REGISTER_METHOD(0x01F2AAA0, void, ctor, (app::AnimationTriggers * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F2AB40, app::String *, get_normalTrigger, (app::AnimationTriggers * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_normalTrigger, (app::AnimationTriggers * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x01F25880, app::String *, get_highlightedTrigger, (app::AnimationTriggers * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_highlightedTrigger, (app::AnimationTriggers * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x01704A60, app::String *, get_pressedTrigger, (app::AnimationTriggers * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_pressedTrigger, (app::AnimationTriggers * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x01F234C0, app::String *, get_disabledTrigger, (app::AnimationTriggers * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_disabledTrigger, (app::AnimationTriggers * this_ptr, app::String * value))
}
