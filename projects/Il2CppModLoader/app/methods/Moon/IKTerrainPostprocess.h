#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::IKTerrainPostprocess {
    IL2CPP_REGISTER_METHOD(0x003FF7B0, int32_t, get_Order, (app::IKTerrainPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB90, void, OnAddedToAnimator, (app::IKTerrainPostprocess * this_ptr, app::MoonAnimator* animator))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Process, (app::IKTerrainPostprocess * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x008A2C20, void, ctor, (app::IKTerrainPostprocess * this_ptr))
} // namespace app::classes::Moon::IKTerrainPostprocess
