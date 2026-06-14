#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Type_Newtonsoft_Json_ReadType_.h>
#include <Modloader/app/structs/ReadType__Enum.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Type_Newtonsoft_Json_ReadType_ {
    IL2CPP_REGISTER_METHOD(
        0x02BCDF80,
        bool,
        TryGetValue,
        app::Dictionary_2_System_Type_Newtonsoft_Json_ReadType_* this_ptr,
        app::Type* key,
        app::ReadType__Enum* value
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_Type_Newtonsoft_Json_ReadType_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02BAC140,
        void,
        set_Item,
        app::Dictionary_2_System_Type_Newtonsoft_Json_ReadType_* this_ptr,
        app::Type* key,
        app::ReadType__Enum value
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Type_Newtonsoft_Json_ReadType_
