#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::PlaymodeUpdateDelegate {
    IL2CPP_REGISTER_METHOD(0x02EA08A0, void, add_OnPlaymodeUpdate, (app::Action * value))
    IL2CPP_REGISTER_METHOD(0x02EA09E0, void, remove_OnPlaymodeUpdate, (app::Action * value))
    IL2CPP_REGISTER_METHOD(0x02EA0B20, app::PlaymodeUpdateDelegate*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Init, (app::PlaymodeUpdateDelegate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02EA0DE0, void, Update, (app::PlaymodeUpdateDelegate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::PlaymodeUpdateDelegate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02EA0EC0, void, cctor, ())
} // namespace app::classes::PlaymodeUpdateDelegate
