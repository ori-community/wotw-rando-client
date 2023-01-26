#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Threading::Monitor {
    IL2CPP_REGISTER_METHOD(0x027E0300, void, Enter_1, (app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x027E0330, void, Enter_2, (app::Object * obj, bool* lock_taken))
    IL2CPP_REGISTER_METHOD(0x027E0360, void, ThrowLockTakenException, ())
    IL2CPP_REGISTER_METHOD(0x027E03D0, void, Exit, (app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x027E0400, void, TryEnter, (app::Object * obj, bool* lock_taken))
    IL2CPP_REGISTER_METHOD(0x027E0430, bool, Wait_1, (app::Object * obj, int32_t milliseconds_timeout, bool exit_context))
    IL2CPP_REGISTER_METHOD(0x027E05E0, bool, Wait_2, (app::Object * obj, int32_t milliseconds_timeout))
    IL2CPP_REGISTER_METHOD(0x027E05F0, void, Pulse, (app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x027E0790, void, PulseAll, (app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x027E0930, bool, Monitor_test_synchronised, (app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x027E0980, void, Monitor_pulse, (app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x027E0A00, void, ObjPulse, (app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x027E0B30, void, Monitor_pulse_all, (app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x027E0BB0, void, ObjPulseAll, (app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x027E0CD0, bool, Monitor_wait, (app::Object * obj, int32_t ms))
    IL2CPP_REGISTER_METHOD(0x027E0D00, bool, ObjWait, (bool exit_context, int32_t milliseconds_timeout, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x027E0E30, void, try_enter_with_atomic_var, (app::Object * obj, int32_t milliseconds_timeout, bool* lock_taken))
    IL2CPP_REGISTER_METHOD(0x027E0E90, void, ReliableEnterTimeout, (app::Object * obj, int32_t timeout, bool* lock_taken))
    IL2CPP_REGISTER_METHOD(0x027E0FC0, void, ReliableEnter, (app::Object * obj, bool* lock_taken))
} // namespace app::classes::System::Threading::Monitor
