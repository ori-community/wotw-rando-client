#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComboDataEntry.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::ComboSystem::ComboDataEntry {
    IL2CPP_REGISTER_METHOD(0x00CC5860, void, ctor, app::ComboDataEntry* this_ptr, app::String* move_type_name)
}
