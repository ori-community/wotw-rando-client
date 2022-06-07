#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::UI::TextRenderer {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Prepare, (app::TextRenderer_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Add, (app::TextRenderer_1 * this_ptr, app::CharMetaData_1 meta, app::Vector2 offset))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Apply, (app::TextRenderer_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::TextRenderer_1 * this_ptr))
}
