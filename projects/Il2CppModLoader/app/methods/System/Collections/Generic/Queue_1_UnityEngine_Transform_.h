#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::Queue_1_UnityEngine_Transform_ {
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, ctor, (app::Queue_1_UnityEngine_Transform_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478FA48, Queue_1_UnityEngine_Transform___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, (app::Queue_1_UnityEngine_Transform_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476A3D8, Queue_1_UnityEngine_Transform__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CA77B0, app::Transform *, Dequeue, (app::Queue_1_UnityEngine_Transform_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475C8E8, Queue_1_UnityEngine_Transform__Dequeue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CA7610, void, Enqueue, (app::Queue_1_UnityEngine_Transform_ * this_ptr, app::Transform * item))
    IL2CPP_REGISTER_METHODINFO(0x047281D0, Queue_1_UnityEngine_Transform__Enqueue__MethodInfo)
}
