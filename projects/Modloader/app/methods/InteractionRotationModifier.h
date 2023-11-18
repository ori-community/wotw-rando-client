#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InteractionRotationModifier.h>
#include <Modloader/app/structs/IEnumerable_1_System_String_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UberInteractionManager_PropertyIDCache.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Vector4.h>

namespace app::classes::InteractionRotationModifier {
    IL2CPP_REGISTER_METHOD(0x00639CE0, void, ApplyMultipliers, (app::InteractionRotationModifier * this_ptr, float strength, float speed))
    IL2CPP_REGISTER_METHOD(0x00639D00, void, Randomize, (app::InteractionRotationModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00639D70, app::String*, get_InteractionName, (app::InteractionRotationModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00639E10, app::UberInteractionManager_PropertyIDCache*, get_PropertyCache, (app::InteractionRotationModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00639EF0, app::IEnumerable_1_System_String_*, GetKeywordsForShader, (app::InteractionRotationModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, RequiresVertexColor, (app::InteractionRotationModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0063A080, void, WarmUpResource, ())
    IL2CPP_REGISTER_METHOD(0x0063A340, void, OnPlay, (app::InteractionRotationModifier * this_ptr, float strength, bool explosion))
    IL2CPP_REGISTER_METHOD(0x0063A6E0, int32_t, GetFlip, (app::InteractionRotationModifier * this_ptr, app::Vector3 pos, bool explode))
    IL2CPP_REGISTER_METHOD(0x0063A9F0, app::Vector2, Rotate, (app::Vector2 v, float degrees))
    IL2CPP_REGISTER_METHOD(0x0063AAF0, float, GetStrength, (app::InteractionRotationModifier * this_ptr, app::Vector3 velocity, app::Vector4 strength_val))
    IL2CPP_REGISTER_METHOD(0x0063AEA0, void, SetProperties, (app::InteractionRotationModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0063B010, void, ctor, (app::InteractionRotationModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0063B380, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x006389E0, app::IEnumerable_1_System_String_*, __n__0, (app::InteractionRotationModifier * this_ptr))
} // namespace app::classes::InteractionRotationModifier
