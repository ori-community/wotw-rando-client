#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::TrailModifier {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SetProperties, (app::TrailModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, RequiresUv3, (app::TrailModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, RequiresUv4, (app::TrailModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, RequiresVertexColor, (app::TrailModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00597BB0, void, ctor, (app::TrailModifier * this_ptr))
}
