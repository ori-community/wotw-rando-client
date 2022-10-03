#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::DebugSeinAbilityOverride {
    IL2CPP_REGISTER_METHOD(0x00B7E070, void, Start, (app::DebugSeinAbilityOverride * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B7E080, void, Apply, (app::DebugSeinAbilityOverride * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B7E150, void, Undo, (app::DebugSeinAbilityOverride * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B7E220, void, Update, (app::DebugSeinAbilityOverride * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::DebugSeinAbilityOverride * this_ptr))
} // namespace app::classes::DebugSeinAbilityOverride
