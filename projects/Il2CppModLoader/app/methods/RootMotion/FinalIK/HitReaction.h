#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::RootMotion::FinalIK::HitReaction {
    IL2CPP_REGISTER_METHOD(0x02075FF0, void, OnModifyOffset, (app::HitReaction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02076110, void, Hit, (app::HitReaction * this_ptr, app::Collider* collider, app::Vector3 force, app::Vector3 point))
    IL2CPP_REGISTER_METHOD(0x008A2C20, void, ctor, (app::HitReaction * this_ptr))
} // namespace app::classes::RootMotion::FinalIK::HitReaction
