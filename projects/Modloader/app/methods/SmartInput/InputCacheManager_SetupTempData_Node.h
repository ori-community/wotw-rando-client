#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InputCacheManager_SetupTempData_Node.h>
#include <Modloader/app/structs/ICachableInput.h>

namespace app::classes::SmartInput::InputCacheManager_SetupTempData_Node {
    IL2CPP_REGISTER_METHOD(0x006CD800, void, ctor, (app::InputCacheManager_SetupTempData_Node * this_ptr, app::ICachableInput* _input))
}
