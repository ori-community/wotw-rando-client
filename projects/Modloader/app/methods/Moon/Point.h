#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Point {
    IL2CPP_REGISTER_METHOD(0x00C3DB40, app::Vector3, GetPosition, (app::Point_1 * this_ptr, app::PrimitiveSpace__Enum target_space, app::Transform* local_toworld, app::Transform* root))
    IL2CPP_REGISTER_METHOD(0x00C3DBB0, void, SetPosition, (app::Point_1 * this_ptr, app::Vector3 position, app::PrimitiveSpace__Enum source_space, app::Transform* local_toworld, app::Transform* root))
    IL2CPP_REGISTER_METHOD(0x00C3DC10, void, SetSpace, (app::Point_1 * this_ptr, app::PrimitiveSpace__Enum target_space, app::Transform* local_toworld, app::Transform* root))
    IL2CPP_REGISTER_METHOD(0x00C3DC80, void, ctor, (app::Point_1 * this_ptr))
} // namespace app::classes::Moon::Point
