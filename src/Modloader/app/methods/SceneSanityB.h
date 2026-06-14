#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/SceneSanityB.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::SceneSanityB {
    IL2CPP_REGISTER_METHOD(0x00BBA2A0, app::String*, GetFullHierarchy, app::GameObject* game_object)
    IL2CPP_REGISTER_METHOD(0x00BBA4D0, void, ctor, app::SceneSanityB* this_ptr)
} // namespace app::classes::SceneSanityB
