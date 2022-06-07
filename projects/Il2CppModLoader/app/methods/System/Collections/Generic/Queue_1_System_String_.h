#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::Queue_1_System_String_ {
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, ctor, (app::Queue_1_System_String_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04777B90, Queue_1_System_String___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CA7610, void, Enqueue, (app::Queue_1_System_String_ * this_ptr, app::String * item))
    IL2CPP_REGISTER_METHODINFO(0x04713AA8, Queue_1_System_String__Enqueue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, (app::Queue_1_System_String_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04729EE8, Queue_1_System_String__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CA77B0, app::String *, Dequeue, (app::Queue_1_System_String_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047070F0, Queue_1_System_String__Dequeue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CA76E0, app::Queue_1_T_Enumerator_System_String_, GetEnumerator, (app::Queue_1_System_String_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04776B50, Queue_1_System_String__GetEnumerator__MethodInfo)
}
