#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::InteractionRotationModifier {
    IL2CPP_REGISTER_METHOD(0x00639CE0, void, ApplyMultipliers, (app::InteractionRotationModifier * this_ptr, float strength, float speed))
    IL2CPP_REGISTER_METHOD(0x00639D00, void, Randomize, (app::InteractionRotationModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00639D70, app::String *, get_InteractionName, (app::InteractionRotationModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00639E10, app::UberInteractionManager_PropertyIDCache *, get_PropertyCache, (app::InteractionRotationModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00639EF0, app::IEnumerable_1_System_String_ *, GetKeywordsForShader, (app::InteractionRotationModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, RequiresVertexColor, (app::InteractionRotationModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0063A080, void, WarmUpResource, ())
    IL2CPP_REGISTER_METHOD(0x0063A340, void, OnPlay, (app::InteractionRotationModifier * this_ptr, float strength, bool explosion))
    IL2CPP_REGISTER_METHODINFO(0x0470E9E0, InteractionRotationModifier_OnPlay__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0063A6E0, int32_t, GetFlip, (app::InteractionRotationModifier * this_ptr, app::Vector3 pos, bool explode))
    IL2CPP_REGISTER_METHOD(0x0063A9F0, app::Vector2, Rotate, (app::Vector2 v, float degrees))
    IL2CPP_REGISTER_METHOD(0x0063AAF0, float, GetStrength, (app::InteractionRotationModifier * this_ptr, app::Vector3 velocity, app::Vector4 strength_val))
    IL2CPP_REGISTER_METHOD(0x0063AEA0, void, SetProperties, (app::InteractionRotationModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0063B010, void, ctor, (app::InteractionRotationModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0063B380, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x006389E0, app::IEnumerable_1_System_String_ *, __n__0, (app::InteractionRotationModifier * this_ptr))
}
