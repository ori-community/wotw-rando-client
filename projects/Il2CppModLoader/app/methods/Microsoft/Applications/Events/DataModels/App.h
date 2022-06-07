#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Microsoft::Applications::Events::DataModels::App {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String *, get_expId, (app::App * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_expId, (app::App * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String *, get_userId, (app::App * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_userId, (app::App * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String *, get_env, (app::App * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_env, (app::App * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x002FB970, int32_t, get_asId, (app::App * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB980, void, set_asId, (app::App * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String *, get_id, (app::App * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_id, (app::App * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::String *, get_ver, (app::App * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_ver, (app::App * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::String *, get_locale, (app::App * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_locale, (app::App * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::String *, get_name, (app::App * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_name, (app::App * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x002FBA10, void, ctor_1, (app::App * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_2, (app::App * this_ptr, app::String * full_name, app::String * name))
}
