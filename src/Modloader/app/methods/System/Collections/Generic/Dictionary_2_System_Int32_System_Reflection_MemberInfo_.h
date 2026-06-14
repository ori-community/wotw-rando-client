#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Int32_System_Reflection_MemberInfo_.h>
#include <Modloader/app/structs/MemberInfo_1.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_System_Reflection_MemberInfo_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_Int32_System_Reflection_MemberInfo_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, app::Dictionary_2_System_Int32_System_Reflection_MemberInfo_* this_ptr, int32_t key)
    IL2CPP_REGISTER_METHOD(
        0x02BAC140,
        void,
        set_Item,
        app::Dictionary_2_System_Int32_System_Reflection_MemberInfo_* this_ptr,
        int32_t key,
        app::MemberInfo_1* value
    )
    IL2CPP_REGISTER_METHOD(0x02BB8880, app::MemberInfo_1*, get_Item, app::Dictionary_2_System_Int32_System_Reflection_MemberInfo_* this_ptr, int32_t key)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_System_Reflection_MemberInfo_
