#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Net::TimerThread {
    IL2CPP_REGISTER_METHOD(0x020A5FD0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x020A6780, app::TimerThread_Queue*, CreateQueue, (int32_t duration_milliseconds))
    IL2CPP_REGISTER_METHODINFO(0x04743780, TimerThread_CreateQueue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020A6D40, app::TimerThread_Queue*, GetOrCreateQueue, (int32_t duration_milliseconds))
    IL2CPP_REGISTER_METHODINFO(0x0475CF30, TimerThread_GetOrCreateQueue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020A79A0, void, Prod, ())
    IL2CPP_REGISTER_METHOD(0x020A7C30, void, ThreadProc, ())
    IL2CPP_REGISTER_METHODINFO(0x0476F100, TimerThread_ThreadProc__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020A8550, void, StopTimerThread, ())
    IL2CPP_REGISTER_METHOD(0x020A8620, bool, IsTickBetween, (int32_t start, int32_t end, int32_t comparand))
    IL2CPP_REGISTER_METHOD(0x020A8640, void, OnDomainUnload, (app::Object * sender, app::EventArgs* e))
    IL2CPP_REGISTER_METHODINFO(0x04765EA0, TimerThread_OnDomainUnload__MethodInfo)
} // namespace app::classes::System::Net::TimerThread
