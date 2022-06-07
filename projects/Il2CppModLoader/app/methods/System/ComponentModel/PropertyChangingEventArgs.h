#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::ComponentModel::PropertyChangingEventArgs {
    IL2CPP_REGISTER_METHOD(0x02992530, void, ctor, (app::PropertyChangingEventArgs * this_ptr, app::String * property_name))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String *, get_PropertyName, (app::PropertyChangingEventArgs * this_ptr))
}
