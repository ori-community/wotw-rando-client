#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CreateSceneTool.h>

namespace app::classes::CreateSceneTool {
    IL2CPP_REGISTER_METHOD(0x00DB75F0, void, Update, app::CreateSceneTool* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::CreateSceneTool* this_ptr)
} // namespace app::classes::CreateSceneTool
