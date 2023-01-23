#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/YieldInstruction.h>

namespace app::classes::UnityEngine::YieldInstruction {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::YieldInstruction * this_ptr))
}
