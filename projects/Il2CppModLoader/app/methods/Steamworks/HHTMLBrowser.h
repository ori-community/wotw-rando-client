#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Steamworks::HHTMLBrowser {
    IL2CPP_REGISTER_METHOD(0x0010DB80, void, ctor, (app::HHTMLBrowser__Boxed * this_ptr, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x0012ECC0, app::String *, ToString, (app::HHTMLBrowser__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00130FA0, bool, Equals_1, (app::HHTMLBrowser__Boxed * this_ptr, app::Object * other))
    IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, (app::HHTMLBrowser__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015F7650, bool, op_Equality, (app::HHTMLBrowser x, app::HHTMLBrowser y))
    IL2CPP_REGISTER_METHOD(0x015FB890, bool, op_Inequality, (app::HHTMLBrowser x, app::HHTMLBrowser y))
    IL2CPP_REGISTER_METHOD(0x006CE970, app::HHTMLBrowser, op_Explicit_1, (uint32_t value))
    IL2CPP_REGISTER_METHOD(0x006CE970, uint32_t, op_Explicit_2, (app::HHTMLBrowser that))
    IL2CPP_REGISTER_METHOD(0x0012EDC0, bool, Equals_2, (app::HHTMLBrowser__Boxed * this_ptr, app::HHTMLBrowser other))
    IL2CPP_REGISTER_METHOD(0x0012EDD0, int32_t, CompareTo, (app::HHTMLBrowser__Boxed * this_ptr, app::HHTMLBrowser other))
    IL2CPP_REGISTER_METHOD(0x015FB930, void, cctor, ())
    inline bool operator == (app::HHTMLBrowser x, app::HHTMLBrowser y) {
        return op_Equality(x, y);
    }
    inline bool operator != (app::HHTMLBrowser x, app::HHTMLBrowser y) {
        return op_Inequality(x, y);
    }
}
