#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IPredicates.h>
#include <Modloader/app/structs/SimpleSmoother_c.h>

namespace app::classes::TriangleNet::Smoothing::SimpleSmoother___c {
    IL2CPP_REGISTER_METHOD(0x02A92E20, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SimpleSmoother_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A92F60, app::IPredicates*, __ctor_b__5_0, app::SimpleSmoother_c* this_ptr)
} // namespace app::classes::TriangleNet::Smoothing::SimpleSmoother___c
