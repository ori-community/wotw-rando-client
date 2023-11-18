#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CartFlip.h>
#include <Modloader/app/structs/CapsuleCollider.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/LegacyTimelineSequence.h>
#include <Modloader/app/structs/Rail.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::CartFlip {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (app::CartFlip * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B375D0, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x00B37650, bool, get_IsFlippedHorizontaly, (app::CartFlip * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B37730, bool, get_IsFlippedVerticaly, (app::CartFlip * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B37740, void, Awake, (app::CartFlip * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B37800, void, FixedUpdate, (app::CartFlip * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B37910, void, ResetFflipRailDamageDelay, ())
    IL2CPP_REGISTER_METHOD(0x00B37990, bool, DelayDamageIsOver, ())
    IL2CPP_REGISTER_METHOD(0x00B37A20, void, Flip, (app::CartFlip * this_ptr, app::Rail* current_rail))
    IL2CPP_REGISTER_METHOD(0x00B38080, void, HorizontalFlip, (app::CartFlip * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B381F0, void, FlipVisual, (app::CartFlip * this_ptr, app::Vector3 new_location, app::Vector2 new_up_direction))
    IL2CPP_REGISTER_METHOD(0x00B38510, void, CheckFlipFromDeactivatedRails, (app::CartFlip * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B386E0, void, PlaySequence, (app::CartFlip * this_ptr, app::LegacyTimelineSequence* sequence))
    IL2CPP_REGISTER_METHOD(0x00B38750, app::Collider*, CheckAboveCart, (app::CartFlip * this_ptr, app::Collider* ignored_collider, app::Rail* current_rail, app::CapsuleCollider* capsule_collider, app::Transform* go_through_above_rail_raycast_position, int32_t rail_mask))
    IL2CPP_REGISTER_METHOD(0x005C9550, void, ctor, (app::CartFlip * this_ptr))
} // namespace app::classes::CartFlip
