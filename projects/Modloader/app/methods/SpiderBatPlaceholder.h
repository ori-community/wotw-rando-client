#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpiderBatPlaceholder.h>

namespace app::classes::SpiderBatPlaceholder {
    IL2CPP_REGISTER_METHOD(0x0095C900, void, LateUpdate, (app::SpiderBatPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0095CA70, void, Init, (app::SpiderBatPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0095DA40, void, Spawn, (app::SpiderBatPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0095DE60, void, ctor, (app::SpiderBatPlaceholder * this_ptr))
} // namespace app::classes::SpiderBatPlaceholder
