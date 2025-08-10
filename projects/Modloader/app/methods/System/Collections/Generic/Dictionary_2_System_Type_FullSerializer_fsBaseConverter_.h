#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Type_FullSerializer_fsBaseConverter_.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/fsBaseConverter.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Type_FullSerializer_fsBaseConverter_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_Type_FullSerializer_fsBaseConverter_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02BBA760,
        bool,
        TryGetValue,
        app::Dictionary_2_System_Type_FullSerializer_fsBaseConverter_* this_ptr,
        app::Type* key,
        app::fsBaseConverter** value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BAC140,
        void,
        set_Item,
        app::Dictionary_2_System_Type_FullSerializer_fsBaseConverter_* this_ptr,
        app::Type* key,
        app::fsBaseConverter* value
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Type_FullSerializer_fsBaseConverter_
