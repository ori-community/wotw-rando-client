#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SandWormSegmentTester.h>

namespace app::classes::SandWormSegmentTester {
    IL2CPP_REGISTER_METHOD(0x00C262A0, void, Update, (app::SandWormSegmentTester * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C269B0, void, ctor, (app::SandWormSegmentTester * this_ptr))
} // namespace app::classes::SandWormSegmentTester
