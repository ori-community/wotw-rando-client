#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::VisualDebug::ConcurrentBagPool_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02AF4640, void, ctor, (app::ConcurrentBagPool_1_System_Object_ * this_ptr, app::Func_1_Object_ * object_generator, int32_t initial_size, bool auto_change_size))
    IL2CPP_REGISTER_METHODINFO(0x047050E8, ConcurrentBagPool_1_System_Object___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AF4890, app::Object *, Get, (app::ConcurrentBagPool_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A72D00, void, Put, (app::ConcurrentBagPool_1_System_Object_ * this_ptr, app::Object * item))
}
