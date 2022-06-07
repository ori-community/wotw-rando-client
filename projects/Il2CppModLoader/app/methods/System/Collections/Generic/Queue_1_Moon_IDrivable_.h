#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::Queue_1_Moon_IDrivable_ {
    IL2CPP_REGISTER_METHOD(0x02CA77B0, app::IDrivable *, Dequeue, (app::Queue_1_Moon_IDrivable_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478D528, Queue_1_Moon_IDrivable__Dequeue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, (app::Queue_1_Moon_IDrivable_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04772758, Queue_1_Moon_IDrivable__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, ctor, (app::Queue_1_Moon_IDrivable_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047700B8, Queue_1_Moon_IDrivable___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CA7610, void, Enqueue, (app::Queue_1_Moon_IDrivable_ * this_ptr, app::IDrivable * item))
    IL2CPP_REGISTER_METHODINFO(0x047670D8, Queue_1_Moon_IDrivable__Enqueue__MethodInfo)
}
