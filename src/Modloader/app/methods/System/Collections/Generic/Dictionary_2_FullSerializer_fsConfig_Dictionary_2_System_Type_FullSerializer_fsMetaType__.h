#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType_.h>
#include <Modloader/app/structs/Dictionary_2_System_Type_FullSerializer_fsMetaType_.h>
#include <Modloader/app/structs/fsConfig.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType__ {
    IL2CPP_REGISTER_METHOD(
        0x02BBA760,
        bool,
        TryGetValue,
        app::Dictionary_2_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType_* this_ptr,
        app::fsConfig* key,
        app::Dictionary_2_System_Type_FullSerializer_fsMetaType_** value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BAC140,
        void,
        set_Item,
        app::Dictionary_2_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType_* this_ptr,
        app::fsConfig* key,
        app::Dictionary_2_System_Type_FullSerializer_fsMetaType_* value
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_FullSerializer_fsConfig_Dictionary_2_System_Type_FullSerializer_fsMetaType__
