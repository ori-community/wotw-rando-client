#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TransformTest.h>

namespace app::classes::Moon::TransformTest {
    IL2CPP_REGISTER_METHOD(0x01E79420, void, Start, (app::TransformTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::TransformTest * this_ptr))
} // namespace app::classes::Moon::TransformTest
