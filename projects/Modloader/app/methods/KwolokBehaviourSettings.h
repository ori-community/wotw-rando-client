#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/KwolokBehaviourSettings.h>

namespace app::classes::KwolokBehaviourSettings {
    IL2CPP_REGISTER_METHOD(0x0049C100, void, ctor, (app::KwolokBehaviourSettings * this_ptr))
}
