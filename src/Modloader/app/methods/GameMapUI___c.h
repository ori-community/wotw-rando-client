#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameMapUI_c.h>
#include <Modloader/app/structs/RuntimeQuest.h>

namespace app::classes::GameMapUI___c {
    IL2CPP_REGISTER_METHOD(0x003F7EC0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GameMapUI_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8000, bool, _GetQuestUnderCursor_b__165_0, app::GameMapUI_c* this_ptr, app::RuntimeQuest* q)
} // namespace app::classes::GameMapUI___c
