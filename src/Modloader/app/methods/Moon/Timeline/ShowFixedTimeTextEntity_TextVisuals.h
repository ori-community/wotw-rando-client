#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ShowFixedTimeTextEntity_TextVisuals.h>

namespace app::classes::Moon::Timeline::ShowFixedTimeTextEntity_TextVisuals {
    IL2CPP_REGISTER_METHOD(0x00D01D10, void, Apply, app::ShowFixedTimeTextEntity_TextVisuals* this_ptr, app::ShowFixedTimeTextEntity_TextVisuals* other)
    IL2CPP_REGISTER_METHOD(0x00D01D80, void, ctor, app::ShowFixedTimeTextEntity_TextVisuals* this_ptr)
} // namespace app::classes::Moon::Timeline::ShowFixedTimeTextEntity_TextVisuals
