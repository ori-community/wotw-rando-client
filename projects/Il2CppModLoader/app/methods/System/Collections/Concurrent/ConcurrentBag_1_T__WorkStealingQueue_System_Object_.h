#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Concurrent::ConcurrentBag_1_T__WorkStealingQueue_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02ADB040, int32_t, get_DangerousCount, (app::ConcurrentBag_1_T_WorkStealingQueue_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02ADA500, void, ctor, (app::ConcurrentBag_1_T_WorkStealingQueue_System_Object_ * this_ptr, app::ConcurrentBag_1_T_WorkStealingQueue_System_Object_ * next_queue))
    IL2CPP_REGISTER_METHOD(0x02ADA5B0, void, LocalPush, (app::ConcurrentBag_1_T_WorkStealingQueue_System_Object_ * this_ptr, app::Object * item))
    IL2CPP_REGISTER_METHODINFO(0x04781188, ConcurrentBag_1_T_WorkStealingQueue_System_Object__LocalPush__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02ADAA70, bool, TryLocalPop, (app::ConcurrentBag_1_T_WorkStealingQueue_System_Object_ * this_ptr, app::Object * * result))
    IL2CPP_REGISTER_METHOD(0x02ADAD10, bool, TrySteal, (app::ConcurrentBag_1_T_WorkStealingQueue_System_Object_ * this_ptr, app::Object * * result, bool take))
    IL2CPP_REGISTER_METHOD(0x02ADAF60, int32_t, DangerousCopyTo, (app::ConcurrentBag_1_T_WorkStealingQueue_System_Object_ * this_ptr, app::Object__Array * array, int32_t array_index))
}
