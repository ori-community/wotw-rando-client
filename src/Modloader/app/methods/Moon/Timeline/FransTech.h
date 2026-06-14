#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FransTech.h>

namespace app::classes::Moon::Timeline::FransTech {
    IL2CPP_REGISTER_METHOD(0x0076D050, bool, get_IsPotatoPerformance, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::FransTech* this_ptr)
} // namespace app::classes::Moon::Timeline::FransTech
