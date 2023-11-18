#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkWwiseInitializationSettings_c.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::AkWwiseInitializationSettings___c {
    IL2CPP_REGISTER_METHOD(0x02706D60, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AkWwiseInitializationSettings_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02706EA0, bool, _InitializeSoundEngine_b__31_0, (app::AkWwiseInitializationSettings_c * this_ptr, app::String* o))
} // namespace app::classes::AkWwiseInitializationSettings___c
