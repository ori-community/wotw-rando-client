#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RandomObjectGenerator.h>
#include <Modloader/app/structs/GameObject.h>

namespace app::classes::RandomObjectGenerator {
    IL2CPP_REGISTER_METHOD(0x0072EDE0, void, Start, (app::RandomObjectGenerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0072EE40, void, FixedUpdate, (app::RandomObjectGenerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0072F730, app::GameObject*, GetGroupParent, (app::RandomObjectGenerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0072F9D0, void, ctor, (app::RandomObjectGenerator * this_ptr))
} // namespace app::classes::RandomObjectGenerator
