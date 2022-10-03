#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Network::Web::ParamAttribute {
    IL2CPP_REGISTER_METHOD(0x02E97E20, void, ctor_1, (app::ParamAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02E97EB0, void, ctor_2, (app::ParamAttribute * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Name, (app::ParamAttribute * this_ptr))
} // namespace app::classes::Moon::Network::Web::ParamAttribute
