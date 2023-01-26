#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_Moon_MoonAnimation_Moon_MoonAnimation_.h>
#include <Modloader/app/structs/MoonAnimation.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_Moon_MoonAnimation_Moon_MoonAnimation_ {
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_Moon_MoonAnimation_Moon_MoonAnimation_ * this_ptr, app::MoonAnimation* key, app::MoonAnimation** value))
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_Moon_MoonAnimation_Moon_MoonAnimation_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_Moon_MoonAnimation_Moon_MoonAnimation_ * this_ptr, app::MoonAnimation* key, app::MoonAnimation* value))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_Moon_MoonAnimation_Moon_MoonAnimation_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_Moon_MoonAnimation_Moon_MoonAnimation_
