#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::ComponentModel::ParenthesizePropertyNameAttribute {
    IL2CPP_REGISTER_METHOD(0x00531660, void, ctor_1, (app::ParenthesizePropertyNameAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052C650, void, ctor_2, (app::ParenthesizePropertyNameAttribute * this_ptr, bool need_parenthesis))
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_NeedParenthesis, (app::ParenthesizePropertyNameAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02991D10, bool, Equals, (app::ParenthesizePropertyNameAttribute * this_ptr, app::Object* o))
    IL2CPP_REGISTER_METHOD(0x01FDE840, int32_t, GetHashCode, (app::ParenthesizePropertyNameAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02991DF0, bool, IsDefaultAttribute, (app::ParenthesizePropertyNameAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02991EB0, void, cctor, ())
} // namespace app::classes::System::ComponentModel::ParenthesizePropertyNameAttribute
