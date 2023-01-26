#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/KuAbilities.h>

namespace app::classes::KuAbilities {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::KuAbilities * this_ptr))
}
