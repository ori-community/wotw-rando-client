#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SafeToShowWispTextCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::SafeToShowWispTextCondition {
    IL2CPP_REGISTER_METHOD(0x00C07E40, bool, Validate, (app::SafeToShowWispTextCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00C08090, void, FixedUpdate, (app::SafeToShowWispTextCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SafeToShowWispTextCondition * this_ptr))
} // namespace app::classes::SafeToShowWispTextCondition
