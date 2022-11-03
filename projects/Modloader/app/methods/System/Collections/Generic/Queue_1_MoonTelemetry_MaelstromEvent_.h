#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Collections::Generic::Queue_1_MoonTelemetry_MaelstromEvent_ {
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, (app::Queue_1_MoonTelemetry_MaelstromEvent_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04749218, Queue_1_MoonTelemetry_MaelstromEvent__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CA77B0, app::MoonTelemetry_MaelstromEvent*, Dequeue, (app::Queue_1_MoonTelemetry_MaelstromEvent_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04795508, Queue_1_MoonTelemetry_MaelstromEvent__Dequeue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CA7610, void, Enqueue, (app::Queue_1_MoonTelemetry_MaelstromEvent_ * this_ptr, app::MoonTelemetry_MaelstromEvent* item))
    IL2CPP_REGISTER_METHODINFO(0x04746B40, Queue_1_MoonTelemetry_MaelstromEvent__Enqueue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CA7860, app::MoonTelemetry_MaelstromEvent*, Peek, (app::Queue_1_MoonTelemetry_MaelstromEvent_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473CD80, Queue_1_MoonTelemetry_MaelstromEvent__Peek__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CA7080, void, ctor, (app::Queue_1_MoonTelemetry_MaelstromEvent_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHODINFO(0x0478DA10, Queue_1_MoonTelemetry_MaelstromEvent___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Queue_1_MoonTelemetry_MaelstromEvent_
