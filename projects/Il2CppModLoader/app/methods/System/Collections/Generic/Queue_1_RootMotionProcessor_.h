#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Collections::Generic::Queue_1_RootMotionProcessor_ {
    IL2CPP_REGISTER_METHOD(0x0243CE40, void, Clear, (app::Queue_1_RootMotionProcessor_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04715488, Queue_1_RootMotionProcessor__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, (app::Queue_1_RootMotionProcessor_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472B348, Queue_1_RootMotionProcessor__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CA77B0, app::RootMotionProcessor*, Dequeue, (app::Queue_1_RootMotionProcessor_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04701620, Queue_1_RootMotionProcessor__Dequeue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CA7610, void, Enqueue, (app::Queue_1_RootMotionProcessor_ * this_ptr, app::RootMotionProcessor* item))
    IL2CPP_REGISTER_METHODINFO(0x04740258, Queue_1_RootMotionProcessor__Enqueue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, ctor, (app::Queue_1_RootMotionProcessor_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04722E60, Queue_1_RootMotionProcessor___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Queue_1_RootMotionProcessor_
