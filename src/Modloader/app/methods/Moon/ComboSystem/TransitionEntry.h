#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TransitionEntry.h>

namespace app::classes::Moon::ComboSystem::TransitionEntry {
    IL2CPP_REGISTER_METHOD(0x00CC8D50, void, ctor, app::TransitionEntry* this_ptr, app::String* type_name, int32_t type_indx)
}
