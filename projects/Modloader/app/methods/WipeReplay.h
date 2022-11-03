#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::WipeReplay {
    IL2CPP_REGISTER_METHOD(0x02EA3710, void, ctor, (app::WipeReplay * this_ptr, app::String* site_id, app::String* player_id))
}
