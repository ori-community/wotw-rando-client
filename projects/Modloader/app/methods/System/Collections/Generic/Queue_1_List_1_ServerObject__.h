#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Collections::Generic::Queue_1_List_1_ServerObject__ {
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, ctor, (app::Queue_1_List_1_ServerObject_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04756970, Queue_1_List_1_ServerObject___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, (app::Queue_1_List_1_ServerObject_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047951E0, Queue_1_List_1_ServerObject__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CA77B0, app::List_1_ServerObject_*, Dequeue, (app::Queue_1_List_1_ServerObject_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476A6E0, Queue_1_List_1_ServerObject__Dequeue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CA7610, void, Enqueue, (app::Queue_1_List_1_ServerObject_ * this_ptr, app::List_1_ServerObject_* item))
    IL2CPP_REGISTER_METHODINFO(0x04791728, Queue_1_List_1_ServerObject__Enqueue__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Queue_1_List_1_ServerObject__
