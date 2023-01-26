#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ActionSequence_c.h>
#include <Modloader/app/structs/ActionMethod.h>

namespace app::classes::ActionSequence___c {
    IL2CPP_REGISTER_METHOD(0x004C6980, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ActionSequence_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C6AC0, int32_t, _FindActions_b__22_0, (app::ActionSequence_c * this_ptr, app::ActionMethod* a, app::ActionMethod* b))
} // namespace app::classes::ActionSequence___c
