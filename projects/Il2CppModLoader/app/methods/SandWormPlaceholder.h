#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SandWormPlaceholder {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanUseAutosetupPositionInOnSand, (app::SandWormPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C20A00, void, UpdateBoundingBoxOnAll, ())
    IL2CPP_REGISTER_METHOD(0x00C20BD0, void, ctor, (app::SandWormPlaceholder * this_ptr))
} // namespace app::classes::SandWormPlaceholder
