#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TimedActionSequence_c.h>
#include <Modloader/app/structs/TimedActionExecuter.h>

namespace app::classes::TimedActionSequence___c {
    IL2CPP_REGISTER_METHOD(0x010F35B0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TimedActionSequence_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010F36F0, int32_t, _FindActions_b__2_0, (app::TimedActionSequence_c * this_ptr, app::TimedActionExecuter* a, app::TimedActionExecuter* b))
} // namespace app::classes::TimedActionSequence___c
