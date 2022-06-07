#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::CustomYieldInstruction {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CustomYieldInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F1B660, app::Object *, get_Current, (app::CustomYieldInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0173D7B0, bool, MoveNext, (app::CustomYieldInstruction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Reset, (app::CustomYieldInstruction * this_ptr))
}
