#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Queue_QueueEnumerator {
    IL2CPP_REGISTER_METHOD(0x0202C5A0, void, ctor, (app::Queue_QueueEnumerator * this_ptr, app::Queue * q))
    IL2CPP_REGISTER_METHOD(0x0173F610, app::Object *, Clone, (app::Queue_QueueEnumerator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0202C5E0, bool, MoveNext, (app::Queue_QueueEnumerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047275D0, Queue_QueueEnumerator_MoveNext__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0202C760, app::Object *, get_Current, (app::Queue_QueueEnumerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04754818, Queue_QueueEnumerator_get_Current__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0202C880, void, Reset, (app::Queue_QueueEnumerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047889E0, Queue_QueueEnumerator_Reset__MethodInfo)
}
