#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/PlayerHasMapStoneFragmentCondition.h>

namespace app::classes::PlayerHasMapStoneFragmentCondition {
    IL2CPP_REGISTER_METHOD(0x0140F520, bool, Validate, app::PlayerHasMapStoneFragmentCondition* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00597BB0, void, ctor, app::PlayerHasMapStoneFragmentCondition* this_ptr)
} // namespace app::classes::PlayerHasMapStoneFragmentCondition
