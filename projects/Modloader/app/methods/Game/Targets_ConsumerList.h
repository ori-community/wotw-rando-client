#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Targets_ConsumerList.h>

namespace app::classes::Game::Targets_ConsumerList {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::Targets_ConsumerList* this_ptr)
}
