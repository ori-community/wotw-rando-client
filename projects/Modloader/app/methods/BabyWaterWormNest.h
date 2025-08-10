#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BabyWaterWormNest.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::BabyWaterWormNest {
    IL2CPP_REGISTER_METHOD(0x00F782C0, void, Update, app::BabyWaterWormNest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00860670, app::Vector3, GetSpawnPoint, app::BabyWaterWormNest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F78900, void, LaunchBabySandWorm, app::BabyWaterWormNest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDrawGizmos, app::BabyWaterWormNest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F78DC0, void, OnDrawGizmosSelected, app::BabyWaterWormNest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0072D940, void, ctor, app::BabyWaterWormNest* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F78F10, void, _LaunchBabySandWorm_b__11_0, app::BabyWaterWormNest* this_ptr)
} // namespace app::classes::BabyWaterWormNest
