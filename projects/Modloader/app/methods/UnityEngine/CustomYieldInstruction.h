#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CustomYieldInstruction.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::UnityEngine::CustomYieldInstruction {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CustomYieldInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F1B660, app::Object*, get_Current, (app::CustomYieldInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0173D7B0, bool, MoveNext, (app::CustomYieldInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Reset, (app::CustomYieldInstruction * this_ptr))
} // namespace app::classes::UnityEngine::CustomYieldInstruction
