#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Type_FullSerializer_fsMetaType_.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/fsMetaType.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Type_FullSerializer_fsMetaType_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_Type_FullSerializer_fsMetaType_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02BBA760,
        bool,
        TryGetValue,
        app::Dictionary_2_System_Type_FullSerializer_fsMetaType_* this_ptr,
        app::Type* key,
        app::fsMetaType** value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BAC140,
        void,
        set_Item,
        app::Dictionary_2_System_Type_FullSerializer_fsMetaType_* this_ptr,
        app::Type* key,
        app::fsMetaType* value
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Type_FullSerializer_fsMetaType_
