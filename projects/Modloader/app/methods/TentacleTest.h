#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TentacleTest.h>
#include <Modloader/app/structs/TentacleTest_Segment.h>

namespace app::classes::TentacleTest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, (app::TentacleTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010D7670, void, Update, (app::TentacleTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010D7860, app::TentacleTest_Segment*, get_LastSegment, (app::TentacleTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010D7900, void, FixedUpdate, (app::TentacleTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010D8470, void, ctor, (app::TentacleTest * this_ptr))
} // namespace app::classes::TentacleTest
