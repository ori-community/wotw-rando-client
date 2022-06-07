#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PhysicsSystemPointSet {
    IL2CPP_REGISTER_METHOD(0x011554C0, void, UpdateWorldSpacePointCache, (app::PhysicsSystemPointSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01155B60, void, PerformAttachment, (app::PhysicsSystemPointSet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FC1550, void, ctor, (app::PhysicsSystemPointSet * this_ptr))
}
