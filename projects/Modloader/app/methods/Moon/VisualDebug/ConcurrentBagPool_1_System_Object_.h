#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConcurrentBagPool_1_System_Object_.h>
#include <Modloader/app/structs/Func_1_Object_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::Moon::VisualDebug::ConcurrentBagPool_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02AF4640, void, ctor, (app::ConcurrentBagPool_1_System_Object_ * this_ptr, app::Func_1_Object_* object_generator, int32_t initial_size, bool auto_change_size))
    IL2CPP_REGISTER_METHOD(0x02AF4890, app::Object*, Get, (app::ConcurrentBagPool_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A72D00, void, Put, (app::ConcurrentBagPool_1_System_Object_ * this_ptr, app::Object* item))
} // namespace app::classes::Moon::VisualDebug::ConcurrentBagPool_1_System_Object_
