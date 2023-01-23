#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SeinMortality.h>

namespace app::classes::SeinMortality {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SeinMortality * this_ptr))
}
