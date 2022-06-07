#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::BabySandWormNest {
    IL2CPP_REGISTER_METHOD(0x00860010, void, Update, (app::BabySandWormNest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00860670, app::Vector3, GetSpawnPoint, (app::BabySandWormNest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00860710, void, LaunchBabySandWorm, (app::BabySandWormNest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDrawGizmos, (app::BabySandWormNest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00860BF0, void, OnDrawGizmosSelected, (app::BabySandWormNest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0072D940, void, ctor, (app::BabySandWormNest * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00860D40, void, _LaunchBabySandWorm_b__10_0, (app::BabySandWormNest * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047800A8, BabySandWormNest__LaunchBabySandWorm_b__10_0__MethodInfo)
}
