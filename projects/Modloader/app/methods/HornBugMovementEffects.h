#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameObject__Array.h>
#include <Modloader/app/structs/HornBugMovementEffects.h>

namespace app::classes::HornBugMovementEffects {
    IL2CPP_REGISTER_METHOD(0x00B6D270, app::GameObject__Array*, GetAllPrefabs, app::HornBugMovementEffects* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::HornBugMovementEffects* this_ptr)
} // namespace app::classes::HornBugMovementEffects
