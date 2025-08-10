#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UberStateGroup.h>

namespace app::classes::Moon::UberStateGroup {
    IL2CPP_REGISTER_METHOD(0x00BAB250, app::String*, get_GroupName, app::UberStateGroup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B5FF80, void, ctor, app::UberStateGroup* this_ptr)
} // namespace app::classes::Moon::UberStateGroup
