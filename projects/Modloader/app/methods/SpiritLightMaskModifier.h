#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SpiritLightMaskModifier {
    IL2CPP_REGISTER_METHOD(0x00D62090, app::IEnumerable_1_System_String_*, GetKeywordsForShader, (app::SpiritLightMaskModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, DoesChangeShape, (app::SpiritLightMaskModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D62240, void, SetProperties, (app::SpiritLightMaskModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D62370, void, ctor, (app::SpiritLightMaskModifier * this_ptr))
} // namespace app::classes::SpiritLightMaskModifier
