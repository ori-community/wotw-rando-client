#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Type_System_MonoCustomAttrs_AttributeInfo_.h>
#include <Modloader/app/structs/MonoCustomAttrs_AttributeInfo.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Type_System_MonoCustomAttrs_AttributeInfo_ {
    IL2CPP_REGISTER_METHOD(0x02259DF0, void, ctor, app::Dictionary_2_System_Type_System_MonoCustomAttrs_AttributeInfo_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(
        0x02BBA760,
        bool,
        TryGetValue,
        app::Dictionary_2_System_Type_System_MonoCustomAttrs_AttributeInfo_* this_ptr,
        app::Type* key,
        app::MonoCustomAttrs_AttributeInfo** value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_System_Type_System_MonoCustomAttrs_AttributeInfo_* this_ptr,
        app::Type* key,
        app::MonoCustomAttrs_AttributeInfo* value
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Type_System_MonoCustomAttrs_AttributeInfo_
