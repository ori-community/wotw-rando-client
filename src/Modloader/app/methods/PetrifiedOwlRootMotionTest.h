#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PetrifiedOwlRootMotionTest.h>

namespace app::classes::PetrifiedOwlRootMotionTest {
    IL2CPP_REGISTER_METHOD(0x014E6710, void, Start, app::PetrifiedOwlRootMotionTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014E69D0, void, Update, app::PetrifiedOwlRootMotionTest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::PetrifiedOwlRootMotionTest* this_ptr)
} // namespace app::classes::PetrifiedOwlRootMotionTest
