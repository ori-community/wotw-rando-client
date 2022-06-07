#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::Queue_1_Moon_Driver_UpdateManager_Entry_ {
    IL2CPP_REGISTER_METHOD(0x02CA7080, void, ctor, (app::Queue_1_Moon_Driver_UpdateManager_Entry_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHODINFO(0x047798B0, Queue_1_Moon_Driver_UpdateManager_Entry___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CA7610, void, Enqueue, (app::Queue_1_Moon_Driver_UpdateManager_Entry_ * this_ptr, app::UpdateManager_Entry * item))
    IL2CPP_REGISTER_METHODINFO(0x0472BD78, Queue_1_Moon_Driver_UpdateManager_Entry__Enqueue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CA78C0, bool, Contains, (app::Queue_1_Moon_Driver_UpdateManager_Entry_ * this_ptr, app::UpdateManager_Entry * item))
    IL2CPP_REGISTER_METHODINFO(0x0476F498, Queue_1_Moon_Driver_UpdateManager_Entry__Contains__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CA77B0, app::UpdateManager_Entry *, Dequeue, (app::Queue_1_Moon_Driver_UpdateManager_Entry_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477A668, Queue_1_Moon_Driver_UpdateManager_Entry__Dequeue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, (app::Queue_1_Moon_Driver_UpdateManager_Entry_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474AB50, Queue_1_Moon_Driver_UpdateManager_Entry__get_Count__MethodInfo)
}
