#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PhysicalSystemStateModifier {
    IL2CPP_REGISTER_METHOD(0x014FBB70, void, Apply, (app::PhysicalSystemStateModifier * this_ptr, app::MoonReference_1_UnityEngine_GameObject_ * target, app::UberStateApplyContext__Enum context))
    IL2CPP_REGISTER_METHOD(0x014FBD90, void, ctor, (app::PhysicalSystemStateModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014FBDB0, app::Dictionary_2_System_Int32_System_Type_ *, GetIdToTypeMap, (app::PhysicalSystemStateModifier * this_ptr))
}
