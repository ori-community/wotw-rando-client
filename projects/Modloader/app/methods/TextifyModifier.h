#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TextifyModifier.h>

namespace app::classes::TextifyModifier {
    IL2CPP_REGISTER_METHOD(0x010E8E80, float, GetQuadExpandSize, (app::TextifyModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, DoesChangeShape, (app::TextifyModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010E8E90, void, SetProperties, (app::TextifyModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010E8F50, void, ctor, (app::TextifyModifier * this_ptr))
} // namespace app::classes::TextifyModifier
