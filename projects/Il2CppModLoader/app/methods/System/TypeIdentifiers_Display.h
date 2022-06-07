#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::TypeIdentifiers_Display {
    IL2CPP_REGISTER_METHOD(0x00B701E0, void, ctor, (app::TypeIdentifiers_Display * this_ptr, app::String * display_name))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String *, get_DisplayName, (app::TypeIdentifiers_Display * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027C0AF0, app::String *, get_InternalName, (app::TypeIdentifiers_Display * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027C0B20, app::String *, GetInternalName, (app::TypeIdentifiers_Display * this_ptr))
}
