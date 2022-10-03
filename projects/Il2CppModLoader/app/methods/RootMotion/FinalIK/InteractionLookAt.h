#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::RootMotion::FinalIK::InteractionLookAt {
    IL2CPP_REGISTER_METHOD(0x02A0A870, void, Look, (app::InteractionLookAt * this_ptr, app::Transform* target, float time))
    IL2CPP_REGISTER_METHOD(0x02A0AAE0, void, Update, (app::InteractionLookAt * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A0AFD0, void, SolveSpine, (app::InteractionLookAt * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A0B1A0, void, SolveHead, (app::InteractionLookAt * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A0B2F0, void, ctor, (app::InteractionLookAt * this_ptr))
} // namespace app::classes::RootMotion::FinalIK::InteractionLookAt
