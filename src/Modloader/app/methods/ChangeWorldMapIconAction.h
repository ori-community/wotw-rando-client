#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ChangeWorldMapIconAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::ChangeWorldMapIconAction {
    IL2CPP_REGISTER_METHOD(0x010463A0, void, Perform, app::ChangeWorldMapIconAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, app::ChangeWorldMapIconAction* this_ptr)
} // namespace app::classes::ChangeWorldMapIconAction
