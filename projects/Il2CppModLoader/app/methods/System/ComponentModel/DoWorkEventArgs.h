#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::ComponentModel::DoWorkEventArgs {
    IL2CPP_REGISTER_METHOD(0x01FE7810, void, ctor, (app::DoWorkEventArgs * this_ptr, app::Object * argument))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Object *, get_Argument, (app::DoWorkEventArgs * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object *, get_Result, (app::DoWorkEventArgs * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Result, (app::DoWorkEventArgs * this_ptr, app::Object * value))
}
