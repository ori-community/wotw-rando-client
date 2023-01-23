#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LanguageCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::LanguageCondition {
    IL2CPP_REGISTER_METHOD(0x00F03960, bool, Validate, (app::LanguageCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::LanguageCondition * this_ptr))
} // namespace app::classes::LanguageCondition
