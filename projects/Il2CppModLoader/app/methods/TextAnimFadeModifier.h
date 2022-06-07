#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::TextAnimFadeModifier {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, RequiresNormals, (app::TextAnimFadeModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010E3690, void, SetProperties, (app::TextAnimFadeModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010E3780, void, ctor, (app::TextAnimFadeModifier * this_ptr))
}
