#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameObject__Array.h>
#include <Modloader/app/structs/HornBugSlamEffects.h>

namespace app::classes::HornBugSlamEffects {
    IL2CPP_REGISTER_METHOD(0x00B6D530, app::GameObject__Array*, GetAllPrefabs, app::HornBugSlamEffects* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::HornBugSlamEffects* this_ptr)
} // namespace app::classes::HornBugSlamEffects
