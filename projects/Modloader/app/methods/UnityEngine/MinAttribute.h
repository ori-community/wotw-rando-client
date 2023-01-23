#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MinAttribute.h>

namespace app::classes::UnityEngine::MinAttribute {
    IL2CPP_REGISTER_METHOD(0x004C87C0, void, ctor, (app::MinAttribute * this_ptr, float min))
}
