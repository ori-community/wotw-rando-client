#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetReplay.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::GetReplay {
    IL2CPP_REGISTER_METHOD(0x02E91860, void, ctor, (app::GetReplay * this_ptr, app::String* site_id, app::String* player_id))
}
