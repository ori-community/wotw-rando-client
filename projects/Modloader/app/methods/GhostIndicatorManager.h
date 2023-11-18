#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GhostIndicatorManager.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_GhostPlayer_.h>

namespace app::classes::GhostIndicatorManager {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::GhostIndicatorManager * this_ptr, app::GameObject* indicator))
    IL2CPP_REGISTER_METHOD(0x00E21090, void, EnableIndicators, (app::GhostIndicatorManager * this_ptr, app::List_1_GhostPlayer_* ghosts))
    IL2CPP_REGISTER_METHOD(0x00E21320, void, DisableIndicators, (app::GhostIndicatorManager * this_ptr))
} // namespace app::classes::GhostIndicatorManager
