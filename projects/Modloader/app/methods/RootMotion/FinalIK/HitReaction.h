#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/HitReaction.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::RootMotion::FinalIK::HitReaction {
    IL2CPP_REGISTER_METHOD(0x02075FF0, void, OnModifyOffset, (app::HitReaction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02076110, void, Hit, (app::HitReaction * this_ptr, app::Collider* collider, app::Vector3 force, app::Vector3 point))
    IL2CPP_REGISTER_METHOD(0x008A2C20, void, ctor, (app::HitReaction * this_ptr))
} // namespace app::classes::RootMotion::FinalIK::HitReaction
