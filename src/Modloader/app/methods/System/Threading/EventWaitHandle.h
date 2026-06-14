#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EventResetMode__Enum.h>
#include <Modloader/app/structs/EventWaitHandle.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Threading::EventWaitHandle {
    IL2CPP_REGISTER_METHOD(0x027DB590, void, ctor_1, app::EventWaitHandle* this_ptr, bool initial_state, app::EventResetMode__Enum mode)
    IL2CPP_REGISTER_METHOD(0x027DB5B0, void, ctor_2, app::EventWaitHandle* this_ptr, bool initial_state, app::EventResetMode__Enum mode, app::String* name)
    IL2CPP_REGISTER_METHOD(0x027DBA20, bool, Reset, app::EventWaitHandle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027DBAD0, bool, Set, app::EventWaitHandle* this_ptr)
} // namespace app::classes::System::Threading::EventWaitHandle
