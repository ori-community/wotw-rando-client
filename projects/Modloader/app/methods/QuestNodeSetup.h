#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/QuestNodeSetup.h>

namespace app::classes::QuestNodeSetup {
    IL2CPP_REGISTER_METHOD(0x00E8B7A0, void, ctor, app::QuestNodeSetup* this_ptr)
}
