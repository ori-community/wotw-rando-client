#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::MaskDissolveModifier {
    IL2CPP_REGISTER_METHOD(0x00A0FE00, app::IEnumerable_1_System_String_*, GetKeywordsForShader, (app::MaskDissolveModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, RequiresVertexColor, (app::MaskDissolveModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A0FF90, void, Randomize, (app::MaskDissolveModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A0FFC0, void, ApplyMultipliers, (app::MaskDissolveModifier * this_ptr, float strength, float speed))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, DoesChangeShape, (app::MaskDissolveModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A10070, void, SetProperties, (app::MaskDissolveModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A10250, void, ctor, (app::MaskDissolveModifier * this_ptr))
} // namespace app::classes::MaskDissolveModifier
