#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Timer_TimerComparer.h>

namespace app::classes::System::Threading::Timer_TimerComparer {
    IL2CPP_REGISTER_METHOD(0x0234B600, int32_t, Compare, app::Timer_TimerComparer* this_ptr, app::Object* x, app::Object* y)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::Timer_TimerComparer* this_ptr)
} // namespace app::classes::System::Threading::Timer_TimerComparer
