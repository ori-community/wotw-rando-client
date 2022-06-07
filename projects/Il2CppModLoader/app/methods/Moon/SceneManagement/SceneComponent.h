#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::SceneManagement::SceneComponent {
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String *, get_Path, (app::SceneComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Path, (app::SceneComponent * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String *, get_Group, (app::SceneComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_Group, (app::SceneComponent * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String *, get_Name, (app::SceneComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_Name, (app::SceneComponent * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnable, (app::SceneComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RefreshData, (app::SceneComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, (app::SceneComponent * this_ptr))
}
