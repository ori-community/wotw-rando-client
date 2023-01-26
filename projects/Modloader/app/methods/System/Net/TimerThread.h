#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TimerThread_Queue.h>
#include <Modloader/app/structs/EventArgs.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Net::TimerThread {
    IL2CPP_REGISTER_METHOD(0x020A5FD0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x020A6780, app::TimerThread_Queue*, CreateQueue, (int32_t duration_milliseconds))
    IL2CPP_REGISTER_METHOD(0x020A6D40, app::TimerThread_Queue*, GetOrCreateQueue, (int32_t duration_milliseconds))
    IL2CPP_REGISTER_METHOD(0x020A79A0, void, Prod, ())
    IL2CPP_REGISTER_METHOD(0x020A7C30, void, ThreadProc, ())
    IL2CPP_REGISTER_METHOD(0x020A8550, void, StopTimerThread, ())
    IL2CPP_REGISTER_METHOD(0x020A8620, bool, IsTickBetween, (int32_t start, int32_t end, int32_t comparand))
    IL2CPP_REGISTER_METHOD(0x020A8640, void, OnDomainUnload, (app::Object * sender, app::EventArgs* e))
} // namespace app::classes::System::Net::TimerThread
