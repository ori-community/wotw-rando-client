#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::InteractionPunchModifier {
    IL2CPP_REGISTER_METHOD(0x005E8360, float, get_OverrideDifficulty, (app::InteractionPunchModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00638F50, void, ApplyMultipliers, (app::InteractionPunchModifier * this_ptr, float strength, float speed))
    IL2CPP_REGISTER_METHOD(0x00638F70, app::String*, get_InteractionName, (app::InteractionPunchModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00639010, app::UberInteractionManager_PropertyIDCache*, get_PropertyCache, (app::InteractionPunchModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006390F0, app::IEnumerable_1_System_String_*, GetKeywordsForShader, (app::InteractionPunchModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, RequiresVertexColor, (app::InteractionPunchModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00639280, float, GetStrength, (app::InteractionPunchModifier * this_ptr, app::Vector3 velocity, app::Vector4 strength_val))
    IL2CPP_REGISTER_METHOD(0x006393C0, void, SetProperties, (app::InteractionPunchModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006394D0, void, ctor, (app::InteractionPunchModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00639750, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x006389E0, app::IEnumerable_1_System_String_*, __n__0, (app::InteractionPunchModifier * this_ptr))
} // namespace app::classes::InteractionPunchModifier
