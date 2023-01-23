#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_RecordableObjectPuppet_.h>
#include <Modloader/app/structs/RecordableObjectPuppet.h>

namespace app::classes::System::Collections::Generic::List_1_RecordableObjectPuppet_ {
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_RecordableObjectPuppet_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047627A8, List_1_RecordableObjectPuppet__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_RecordableObjectPuppet_ * this_ptr, app::RecordableObjectPuppet* item))
    IL2CPP_REGISTER_METHODINFO(0x047281C0, List_1_RecordableObjectPuppet__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_RecordableObjectPuppet_ * this_ptr, app::RecordableObjectPuppet* item))
    IL2CPP_REGISTER_METHODINFO(0x04786B60, List_1_RecordableObjectPuppet__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_RecordableObjectPuppet_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04794688, List_1_RecordableObjectPuppet___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_RecordableObjectPuppet_
