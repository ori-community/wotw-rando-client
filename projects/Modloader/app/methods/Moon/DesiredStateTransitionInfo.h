#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DesiredStateTransition.h>
#include <Modloader/app/structs/DesiredStateTransitionInfo__Boxed.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::DesiredStateTransitionInfo {
    IL2CPP_REGISTER_METHOD(0x00151460, void, ctor, app::DesiredStateTransitionInfo__Boxed* this_ptr, app::String* name, app::DesiredStateTransition state)
}
