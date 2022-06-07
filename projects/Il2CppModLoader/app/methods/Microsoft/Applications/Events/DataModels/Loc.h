#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Microsoft::Applications::Events::DataModels::Loc {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String *, get_id, (app::Loc * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_id, (app::Loc * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String *, get_country, (app::Loc * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_country, (app::Loc * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String *, get_timezone, (app::Loc * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_timezone, (app::Loc * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Loc * this_ptr))
}
