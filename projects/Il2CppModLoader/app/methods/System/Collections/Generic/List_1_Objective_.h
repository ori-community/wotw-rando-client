#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Collections::Generic::List_1_Objective_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_Objective_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04733530, List_1_Objective__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::Objective*, get_Item, (app::List_1_Objective_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04707E98, List_1_Objective__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0BE0, int32_t, IndexOf, (app::List_1_Objective_ * this_ptr, app::Objective* item))
    IL2CPP_REGISTER_METHODINFO(0x0474FD58, List_1_Objective__IndexOf__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_Objective_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478C050, List_1_Objective___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_Objective_
