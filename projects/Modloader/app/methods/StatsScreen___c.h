#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/StatsScreen_c.h>

namespace app::classes::StatsScreen___c {
    IL2CPP_REGISTER_METHOD(0x009BEE10, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::StatsScreen_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009BEF50, void, _OnInstantiate_b__46_0, app::StatsScreen_c* this_ptr, app::GameObject* x)
} // namespace app::classes::StatsScreen___c
