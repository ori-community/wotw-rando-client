#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Type_System_Runtime_Serialization_Formatters_Binary_TypeInformation_.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/TypeInformation.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Type_System_Runtime_Serialization_Formatters_Binary_TypeInformation_ {
    IL2CPP_REGISTER_METHOD(
        0x02BBA760,
        bool,
        TryGetValue,
        app::Dictionary_2_System_Type_System_Runtime_Serialization_Formatters_Binary_TypeInformation_* this_ptr,
        app::Type* key,
        app::TypeInformation** value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_System_Type_System_Runtime_Serialization_Formatters_Binary_TypeInformation_* this_ptr,
        app::Type* key,
        app::TypeInformation* value
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_Type_System_Runtime_Serialization_Formatters_Binary_TypeInformation_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Type_System_Runtime_Serialization_Formatters_Binary_TypeInformation_
