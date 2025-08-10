#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CurrentCharacterFacingCondition.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::CurrentCharacterFacingCondition {
    IL2CPP_REGISTER_METHOD(0x00DB9FC0, bool, Validate, app::CurrentCharacterFacingCondition* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00DBA0B0, app::String*, GetNiceName, app::CurrentCharacterFacingCondition* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::CurrentCharacterFacingCondition* this_ptr)
} // namespace app::classes::CurrentCharacterFacingCondition
