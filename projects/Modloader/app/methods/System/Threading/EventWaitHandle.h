#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Threading::EventWaitHandle {
    IL2CPP_REGISTER_METHOD(0x027DB590, void, ctor_1, (app::EventWaitHandle * this_ptr, bool initial_state, app::EventResetMode__Enum mode))
    IL2CPP_REGISTER_METHOD(0x027DB5B0, void, ctor_2, (app::EventWaitHandle * this_ptr, bool initial_state, app::EventResetMode__Enum mode, app::String* name))
    IL2CPP_REGISTER_METHODINFO(0x0473A610, EventWaitHandle__ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027DBA20, bool, Reset, (app::EventWaitHandle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04752C60, EventWaitHandle_Reset__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027DBAD0, bool, Set, (app::EventWaitHandle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475E050, EventWaitHandle_Set__MethodInfo)
} // namespace app::classes::System::Threading::EventWaitHandle
