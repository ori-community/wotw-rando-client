#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetReplays.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::GetReplays {
    IL2CPP_REGISTER_METHOD(0x02E91B10, void, ctor, (app::GetReplays * this_ptr, app::String* site_id))
}
