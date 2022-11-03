#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::OffsetSpriteWhenGrabbingBlock {
    IL2CPP_REGISTER_METHOD(0x00610C30, void, FixedUpdate, (app::OffsetSpriteWhenGrabbingBlock * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::OffsetSpriteWhenGrabbingBlock * this_ptr))
} // namespace app::classes::OffsetSpriteWhenGrabbingBlock
