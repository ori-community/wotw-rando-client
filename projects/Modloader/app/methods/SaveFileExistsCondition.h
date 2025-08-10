#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/SaveFileExistsCondition.h>

namespace app::classes::SaveFileExistsCondition {
    IL2CPP_REGISTER_METHOD(0x00C2AF70, bool, Validate, app::SaveFileExistsCondition* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::SaveFileExistsCondition* this_ptr)
} // namespace app::classes::SaveFileExistsCondition
