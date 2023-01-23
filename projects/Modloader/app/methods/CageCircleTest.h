#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CageCircleTest.h>

namespace app::classes::CageCircleTest {
    IL2CPP_REGISTER_METHOD(0x00823190, void, OnDrawGizmosSelected, (app::CageCircleTest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00823230, void, ctor, (app::CageCircleTest * this_ptr))
} // namespace app::classes::CageCircleTest
