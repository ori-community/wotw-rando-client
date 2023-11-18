#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DamageTypeEffectPair.h>

namespace app::classes::DamageTypeEffectPair {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DamageTypeEffectPair * this_ptr))
}
