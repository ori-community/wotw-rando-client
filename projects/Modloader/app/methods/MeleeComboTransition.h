#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComboInput.h>
#include <Modloader/app/structs/MeleeComboTransition.h>
#include <Modloader/app/structs/SeinCharacter.h>

namespace app::classes::MeleeComboTransition {
    IL2CPP_REGISTER_METHOD(0x009C4B20, bool, IsConditionMet_1, app::MeleeComboTransition* this_ptr, app::SeinCharacter* sein)
    IL2CPP_REGISTER_METHOD(0x009C4DA0, bool, IsConditionMet_2, app::MeleeComboTransition* this_ptr, app::SeinCharacter* sein, app::ComboInput* input)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::MeleeComboTransition* this_ptr)
} // namespace app::classes::MeleeComboTransition
