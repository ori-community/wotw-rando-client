#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::Queue_1_Moon_BrainBehaviour_ {
    IL2CPP_REGISTER_METHOD(0x0243CE40, void, Clear, (app::Queue_1_Moon_BrainBehaviour_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472EFF0, Queue_1_Moon_BrainBehaviour__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CA7610, void, Enqueue, (app::Queue_1_Moon_BrainBehaviour_ * this_ptr, app::BrainBehaviour * item))
    IL2CPP_REGISTER_METHODINFO(0x04788B80, Queue_1_Moon_BrainBehaviour__Enqueue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, (app::Queue_1_Moon_BrainBehaviour_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04761AF0, Queue_1_Moon_BrainBehaviour__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CA77B0, app::BrainBehaviour *, Dequeue, (app::Queue_1_Moon_BrainBehaviour_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047382F8, Queue_1_Moon_BrainBehaviour__Dequeue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, ctor, (app::Queue_1_Moon_BrainBehaviour_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04792C28, Queue_1_Moon_BrainBehaviour___ctor__MethodInfo)
}
