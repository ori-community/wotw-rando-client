#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ReadOnlyCollection_1_System_Reflection_MemberInfo_.h>
#include <Modloader/app/structs/MemberInfo_1.h>

namespace app::classes::System::Collections::ObjectModel::ReadOnlyCollection_1_System_Reflection_MemberInfo_ {
    IL2CPP_REGISTER_METHOD(0x02B7DD20, int32_t, get_Count, (app::ReadOnlyCollection_1_System_Reflection_MemberInfo_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02EC2580, app::MemberInfo_1*, get_Item, (app::ReadOnlyCollection_1_System_Reflection_MemberInfo_ * this_ptr, int32_t index))
} // namespace app::classes::System::Collections::ObjectModel::ReadOnlyCollection_1_System_Reflection_MemberInfo_
