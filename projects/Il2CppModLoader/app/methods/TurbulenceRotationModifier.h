#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::TurbulenceRotationModifier {
    IL2CPP_REGISTER_METHOD(0x00B17FE0, void, ApplyMultipliers, (app::TurbulenceRotationModifier * this_ptr, float strength, float speed))
    IL2CPP_REGISTER_METHOD(0x00B18050, app::IEnumerable_1_System_String_ *, GetBaseVertexTextureNames, (app::TurbulenceRotationModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B181D0, void, Randomize, (app::TurbulenceRotationModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B18310, app::IEnumerable_1_System_String_ *, GetKeywordsForShader, (app::TurbulenceRotationModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, RequiresVertexColor, (app::TurbulenceRotationModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B184A0, void, SetProperties, (app::TurbulenceRotationModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B18780, void, ctor, (app::TurbulenceRotationModifier * this_ptr))
}
