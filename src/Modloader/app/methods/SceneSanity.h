#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/SceneSanity.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::SceneSanity {
    IL2CPP_REGISTER_METHOD(0x00BBA030, app::String*, GetFullHierarchy, app::GameObject* go)
    IL2CPP_REGISTER_METHOD(0x00BBA210, void, ctor, app::SceneSanity* this_ptr)
} // namespace app::classes::SceneSanity
