#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SandWormEntity_Segment {
    IL2CPP_REGISTER_METHOD(0x004C87B0, float, get_DistanceOffset, (app::SandWormEntity_Segment * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C87C0, void, set_DistanceOffset, (app::SandWormEntity_Segment * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::VerletBody_Point*, get_VerletPoint, (app::SandWormEntity_Segment * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_VerletPoint, (app::SandWormEntity_Segment * this_ptr, app::VerletBody_Point* value))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::VerletBody_Link*, get_VerletLink, (app::SandWormEntity_Segment * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_VerletLink, (app::SandWormEntity_Segment * this_ptr, app::VerletBody_Link* value))
    IL2CPP_REGISTER_METHOD(0x00C1B1E0, app::Vector3, get_Velocity, (app::SandWormEntity_Segment * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C1B200, void, set_Velocity, (app::SandWormEntity_Segment * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::Rigidbody*, get_Rigidbody, (app::SandWormEntity_Segment * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_Rigidbody, (app::SandWormEntity_Segment * this_ptr, app::Rigidbody* value))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::CharacterJoint*, get_CharacterJoint, (app::SandWormEntity_Segment * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_CharacterJoint, (app::SandWormEntity_Segment * this_ptr, app::CharacterJoint* value))
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::Collider*, get_Collider, (app::SandWormEntity_Segment * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_Collider, (app::SandWormEntity_Segment * this_ptr, app::Collider* value))
    IL2CPP_REGISTER_METHOD(0x004430B0, bool, get_Pinned, (app::SandWormEntity_Segment * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058ED80, void, set_Pinned, (app::SandWormEntity_Segment * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00A28F40, float, get_RotationYVelocity, (app::SandWormEntity_Segment * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C1ABF0, void, set_RotationYVelocity, (app::SandWormEntity_Segment * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x002FBC00, app::EntityTargetting*, get_Targetting, (app::SandWormEntity_Segment * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC10, void, set_Targetting, (app::SandWormEntity_Segment * this_ptr, app::EntityTargetting* value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SandWormEntity_Segment * this_ptr))
} // namespace app::classes::SandWormEntity_Segment
