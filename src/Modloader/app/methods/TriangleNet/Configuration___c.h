#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Configuration_c.h>
#include <Modloader/app/structs/IPredicates.h>
#include <Modloader/app/structs/TrianglePool.h>

namespace app::classes::TriangleNet::Configuration___c {
    IL2CPP_REGISTER_METHOD(0x0261A290, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::Configuration_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0261A3D0, app::IPredicates*, __ctor_b__0_0, app::Configuration_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0261A460, app::TrianglePool*, __ctor_b__0_1, app::Configuration_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0261A5A0, app::TrianglePool*, __ctor_b__1_0, app::Configuration_c* this_ptr)
} // namespace app::classes::TriangleNet::Configuration___c
