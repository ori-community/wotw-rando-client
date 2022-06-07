#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Mono::SafeStringMarshal {
    IL2CPP_REGISTER_METHOD(0x023CED90, void *, StringToUtf8, (app::String * str))
    IL2CPP_REGISTER_METHOD(0x023CEE20, void, GFree, (void * ptr))
    IL2CPP_REGISTER_METHOD(0x001EA8E0, void, ctor, (app::SafeStringMarshal__Boxed * this_ptr, app::String * str))
    IL2CPP_REGISTER_METHOD(0x001EA8F0, void *, get_Value, (app::SafeStringMarshal__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EA900, void, Dispose, (app::SafeStringMarshal__Boxed * this_ptr))
}
