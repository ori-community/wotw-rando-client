#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AttributeUsageAttribute.h>
#include <Modloader/app/structs/Dictionary_2_System_Type_System_AttributeUsageAttribute_.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Type_System_AttributeUsageAttribute_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_Type_System_AttributeUsageAttribute_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02BBA760,
        bool,
        TryGetValue,
        app::Dictionary_2_System_Type_System_AttributeUsageAttribute_* this_ptr,
        app::Type* key,
        app::AttributeUsageAttribute** value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BAC140,
        void,
        set_Item,
        app::Dictionary_2_System_Type_System_AttributeUsageAttribute_* this_ptr,
        app::Type* key,
        app::AttributeUsageAttribute* value
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Type_System_AttributeUsageAttribute_
