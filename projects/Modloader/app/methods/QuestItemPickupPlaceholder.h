#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::QuestItemPickupPlaceholder {
    IL2CPP_REGISTER_METHOD(0x00E8AB00, void, OnInstantiate, (app::QuestItemPickupPlaceholder * this_ptr, app::GameObject* instance))
    IL2CPP_REGISTER_METHOD(0x00E8ABD0, void, ctor, (app::QuestItemPickupPlaceholder * this_ptr))
} // namespace app::classes::QuestItemPickupPlaceholder
