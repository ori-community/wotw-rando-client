#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_RigidbodyState_.h>
#include <Modloader/app/structs/RigidbodyState.h>

namespace app::classes::System::Collections::Generic::List_1_RigidbodyState_ {
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor, (app::List_1_RigidbodyState_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHODINFO(0x0477AD00, List_1_RigidbodyState___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_RigidbodyState_ * this_ptr, app::RigidbodyState* item))
    IL2CPP_REGISTER_METHODINFO(0x04794168, List_1_RigidbodyState__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_RigidbodyState_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474C9D0, List_1_RigidbodyState__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::RigidbodyState*, get_Item, (app::List_1_RigidbodyState_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04791530, List_1_RigidbodyState__get_Item__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_RigidbodyState_
