#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DestroyDetector.h>
#include <Modloader/app/structs/Action.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::DestroyDetector {
    IL2CPP_REGISTER_METHOD(0x01DD3F30, void, add_onDestroy, (app::DestroyDetector * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x01DD4020, void, remove_onDestroy, (app::DestroyDetector * this_ptr, app::Action* value))
    IL2CPP_REGISTER_METHOD(0x012B0FE0, void, OnDestroy, (app::DestroyDetector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DD4110, void, ctor, (app::DestroyDetector * this_ptr))
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::DestroyDetector
