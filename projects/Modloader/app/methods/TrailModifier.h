#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TrailModifier.h>

namespace app::classes::TrailModifier {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SetProperties, (app::TrailModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, RequiresUv3, (app::TrailModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, RequiresUv4, (app::TrailModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, RequiresVertexColor, (app::TrailModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00597BB0, void, ctor, (app::TrailModifier * this_ptr))
} // namespace app::classes::TrailModifier
