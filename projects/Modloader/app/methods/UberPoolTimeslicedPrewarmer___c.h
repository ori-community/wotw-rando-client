#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UberPoolTimeslicedPrewarmer_c.h>
#include <Modloader/app/structs/UberPoolGroupWarmer.h>

namespace app::classes::UberPoolTimeslicedPrewarmer___c {
    IL2CPP_REGISTER_METHOD(0x00FEDBB0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UberPoolTimeslicedPrewarmer_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FEDCF0, bool, _Update_b__8_0, (app::UberPoolTimeslicedPrewarmer_c * this_ptr, app::UberPoolGroupWarmer* x))
} // namespace app::classes::UberPoolTimeslicedPrewarmer___c
