#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CleanupDebugger_c.h>
#include <Modloader/app/structs/Tuple_2_String_Single_.h>

namespace app::classes::CleanupDebugger___c {
    IL2CPP_REGISTER_METHOD(0x01326880, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CleanupDebugger_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013269C0, float, _Update_b__27_1, (app::CleanupDebugger_c * this_ptr, app::Tuple_2_String_Single_* x))
    IL2CPP_REGISTER_METHOD(0x01326A50, bool, _Update_b__27_0, (app::CleanupDebugger_c * this_ptr, app::Tuple_2_String_Single_* x))
} // namespace app::classes::CleanupDebugger___c
