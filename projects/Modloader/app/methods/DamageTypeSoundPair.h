#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DamageTypeSoundPair.h>

namespace app::classes::DamageTypeSoundPair {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::DamageTypeSoundPair* this_ptr)
}
