#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_System_TimeType_.h>
#include <Modloader/app/structs/TimeType.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_System_TimeType_ {
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, (app::Dictionary_2_System_Int32_System_TimeType_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472DEB0, Dictionary_2_System_Int32_System_TimeType__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BB8880, app::TimeType*, get_Item, (app::Dictionary_2_System_Int32_System_TimeType_ * this_ptr, int32_t key))
    IL2CPP_REGISTER_METHODINFO(0x04727D10, Dictionary_2_System_Int32_System_TimeType__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02259DF0, void, ctor, (app::Dictionary_2_System_Int32_System_TimeType_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHODINFO(0x04711280, Dictionary_2_System_Int32_System_TimeType___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_Int32_System_TimeType_ * this_ptr, int32_t key, app::TimeType* value))
    IL2CPP_REGISTER_METHODINFO(0x0475F788, Dictionary_2_System_Int32_System_TimeType__Add__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_System_TimeType_
