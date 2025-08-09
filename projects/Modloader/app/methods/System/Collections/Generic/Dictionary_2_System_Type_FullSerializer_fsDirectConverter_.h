#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Type_FullSerializer_fsDirectConverter_.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/fsDirectConverter.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Type_FullSerializer_fsDirectConverter_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_Type_FullSerializer_fsDirectConverter_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02BAC140,
        void,
        set_Item,
        app::Dictionary_2_System_Type_FullSerializer_fsDirectConverter_* this_ptr,
        app::Type* key,
        app::fsDirectConverter* value
    )
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, app::Dictionary_2_System_Type_FullSerializer_fsDirectConverter_* this_ptr, app::Type* key)
    IL2CPP_REGISTER_METHOD(
        0x02BD24D0,
        app::fsDirectConverter*,
        get_Item,
        app::Dictionary_2_System_Type_FullSerializer_fsDirectConverter_* this_ptr,
        app::Type* key
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Type_FullSerializer_fsDirectConverter_
