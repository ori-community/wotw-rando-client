#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::LegacyBabySandWorm {
    IL2CPP_REGISTER_METHOD(0x015CE620, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x015CE700, app::DigZone*, GetDigZoneIntersectingCircle, (app::LegacyBabySandWorm * this_ptr, app::Vector3 center, float radius))
    IL2CPP_REGISTER_METHOD(0x015CE900, void, Awake, (app::LegacyBabySandWorm * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015CEF30, void, EnablePhysics, (app::LegacyBabySandWorm * this_ptr, float distance_to_target))
    IL2CPP_REGISTER_METHOD(0x015CF240, void, DisablePhysics, (app::LegacyBabySandWorm * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015CF2B0, void, FixedUpdate, (app::LegacyBabySandWorm * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015D0FD0, bool, HandleCCD, (app::LegacyBabySandWorm * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015D14C0, app::Vector3, GetPositionFromHistory, (app::LegacyBabySandWorm * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x015D17B0, void, UpdateLineRenderer, (app::LegacyBabySandWorm * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015D1A00, void, OnCollided, (app::LegacyBabySandWorm * this_ptr, app::Collider* collider))
    IL2CPP_REGISTER_METHOD(0x015D1DF0, void, OnCollisionEnter, (app::LegacyBabySandWorm * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x015D1EE0, void, ctor, (app::LegacyBabySandWorm * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015D2330, void, cctor, ())
} // namespace app::classes::LegacyBabySandWorm
