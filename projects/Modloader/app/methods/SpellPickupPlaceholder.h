#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SpellPickupPlaceholder {
    IL2CPP_REGISTER_METHOD(0x00943B00, void, OnInstantiate, (app::SpellPickupPlaceholder * this_ptr, app::GameObject* instance))
    IL2CPP_REGISTER_METHOD(0x00943D00, void, ctor, (app::SpellPickupPlaceholder * this_ptr))
} // namespace app::classes::SpellPickupPlaceholder
