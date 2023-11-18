#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinWarpSpell.h>

namespace app::classes::SeinWarpSpell {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (app::SeinWarpSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB4D30, void, OnSetReferenceToSein, (app::SeinWarpSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB4D60, void, OnDestroy, (app::SeinWarpSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005C9550, void, ctor, (app::SeinWarpSpell * this_ptr))
} // namespace app::classes::SeinWarpSpell
