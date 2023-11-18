#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AbilitySetAsset.h>

namespace app::classes::AbilitySetAsset {
    IL2CPP_REGISTER_METHOD(0x004B39D0, void, ctor, (app::AbilitySetAsset * this_ptr))
}
