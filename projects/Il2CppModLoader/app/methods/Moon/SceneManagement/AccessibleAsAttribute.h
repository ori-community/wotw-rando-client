#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::SceneManagement::AccessibleAsAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::AccessibleAsAttribute * this_ptr, app::Type * type))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Type *, get_MappedType, (app::AccessibleAsAttribute * this_ptr))
}
