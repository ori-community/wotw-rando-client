#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ReplayModel {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::ReplayModel * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02EA24F0, void, ctor_2, (app::ReplayModel * this_ptr, app::String* player, int32_t duration, app::String* replay))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Player, (app::ReplayModel * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00863E90, float, get_Duration, (app::ReplayModel * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String*, get_ReplayData, (app::ReplayModel * this_ptr))
} // namespace app::classes::ReplayModel
