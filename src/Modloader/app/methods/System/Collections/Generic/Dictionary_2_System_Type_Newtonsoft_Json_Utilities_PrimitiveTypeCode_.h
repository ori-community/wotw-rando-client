#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Type_Newtonsoft_Json_Utilities_PrimitiveTypeCode_.h>
#include <Modloader/app/structs/PrimitiveTypeCode__Enum.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Type_Newtonsoft_Json_Utilities_PrimitiveTypeCode_ {
    IL2CPP_REGISTER_METHOD(
        0x02BCDF80,
        bool,
        TryGetValue,
        app::Dictionary_2_System_Type_Newtonsoft_Json_Utilities_PrimitiveTypeCode_* this_ptr,
        app::Type* key,
        app::PrimitiveTypeCode__Enum* value
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_Type_Newtonsoft_Json_Utilities_PrimitiveTypeCode_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_System_Type_Newtonsoft_Json_Utilities_PrimitiveTypeCode_* this_ptr,
        app::Type* key,
        app::PrimitiveTypeCode__Enum value
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Type_Newtonsoft_Json_Utilities_PrimitiveTypeCode_
