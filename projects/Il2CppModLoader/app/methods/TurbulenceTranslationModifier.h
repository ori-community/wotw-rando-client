#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::TurbulenceTranslationModifier {
    IL2CPP_REGISTER_METHOD(0x013D6150, void, OnPresetCreation, (app::TurbulenceTranslationModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013D6310, void, ApplyMultipliers, (app::TurbulenceTranslationModifier * this_ptr, float strength, float speed))
    IL2CPP_REGISTER_METHOD(0x013D64E0, float, RangeRandom, (app::TurbulenceTranslationModifier * this_ptr, float mag))
    IL2CPP_REGISTER_METHOD(0x013D6540, app::IEnumerable_1_System_String_ *, GetBaseVertexTextureNames, (app::TurbulenceTranslationModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013D66C0, app::IEnumerable_1_System_String_ *, GetKeywordsForShader, (app::TurbulenceTranslationModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, RequiresVertexColor, (app::TurbulenceTranslationModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013D6850, void, Randomize, (app::TurbulenceTranslationModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013D69C0, void, SetProperties, (app::TurbulenceTranslationModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013D6B40, void, ctor, (app::TurbulenceTranslationModifier * this_ptr))
}
