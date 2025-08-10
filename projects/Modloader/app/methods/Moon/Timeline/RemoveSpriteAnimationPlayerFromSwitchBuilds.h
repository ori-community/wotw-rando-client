#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RemoveSpriteAnimationPlayerFromSwitchBuilds.h>

namespace app::classes::Moon::Timeline::RemoveSpriteAnimationPlayerFromSwitchBuilds {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, DoStrip, app::RemoveSpriteAnimationPlayerFromSwitchBuilds* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0077F8F0, void, OnBeforeStrip, app::RemoveSpriteAnimationPlayerFromSwitchBuilds* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::RemoveSpriteAnimationPlayerFromSwitchBuilds* this_ptr)
} // namespace app::classes::Moon::Timeline::RemoveSpriteAnimationPlayerFromSwitchBuilds
