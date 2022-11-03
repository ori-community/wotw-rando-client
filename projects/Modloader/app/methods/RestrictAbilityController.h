#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::RestrictAbilityController {
    IL2CPP_REGISTER_METHOD(0x0090D040, app::AnimationSwapSet*, get_AnimationSet, ())
    IL2CPP_REGISTER_METHOD(0x0090D0E0, void, set_AnimationSet, (app::AnimationSwapSet * value))
    IL2CPP_REGISTER_METHOD(0x0090D190, bool, IsRestricted_1, (app::SeinAbilityRestrictZoneMask__Enum restrict_masks))
    IL2CPP_REGISTER_METHOD(0x0090D290, bool, IsRestricted_2, (app::SeinAbilityRestrictZoneMask__Enum current_mask, app::SeinAbilityRestrictZoneMask__Enum restrict_masks))
    IL2CPP_REGISTER_METHOD(0x0090D2B0, bool, CanCreateCheckpoint, ())
    IL2CPP_REGISTER_METHOD(0x0090D350, bool, IsRestricted_3, (app::AbilityType__Enum ability, app::SeinAbilityRestrictZoneMask__Enum restrict_mask))
    IL2CPP_REGISTER_METHOD(0x0090D4B0, bool, IsRestricted_4, (app::SeinAbilityRestrictZoneMask__Enum current_mask, app::AbilityType__Enum ability, app::SeinAbilityRestrictZoneMask__Enum restrict_masks))
    IL2CPP_REGISTER_METHOD(0x0090D5D0, app::SeinAbilityRestrictZoneMask__Enum, GetCurrentRestrictZoneMask, ())
    IL2CPP_REGISTER_METHOD(0x0090D6A0, bool, IsRestricted_5, (app::Input_Command__Enum button, app::SeinAbilityRestrictZoneMask__Enum restrict_mask))
    IL2CPP_REGISTER_METHOD(0x0090D7D0, void, Restrict_1, (app::SeinAbilityRestrictZoneMask__Enum mask))
    IL2CPP_REGISTER_METHOD(0x0090D880, void, Restrict_2, (app::AnimationSwapSet * set, bool block_turning))
    IL2CPP_REGISTER_METHOD(0x0090D9D0, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateBufferedCheckpoint, ())
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::UpdateType__Enum, get_UpdateType, (app::RestrictAbilityController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0090DB60, void, OnEnable, (app::RestrictAbilityController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0090DC00, void, OnDisable, (app::RestrictAbilityController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0090DCA0, void, OnFixedUpdate, (app::RestrictAbilityController * this_ptr, float delta))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::RestrictAbilityController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
} // namespace app::classes::RestrictAbilityController
