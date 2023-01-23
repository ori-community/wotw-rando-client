#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_ServerObject_.h>
#include <Modloader/app/structs/ServerObject.h>

namespace app::classes::System::Collections::Generic::List_1_ServerObject_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_ServerObject_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04720370, List_1_ServerObject__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::ServerObject*, get_Item, (app::List_1_ServerObject_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04725120, List_1_ServerObject__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, (app::List_1_ServerObject_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0472BA40, List_1_ServerObject__RemoveAt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_ServerObject_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04793408, List_1_ServerObject___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_ServerObject_ * this_ptr, app::ServerObject* item))
    IL2CPP_REGISTER_METHODINFO(0x0473A290, List_1_ServerObject__Add__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_ServerObject_
