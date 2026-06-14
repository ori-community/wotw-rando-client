#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Int32_.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_System_Int32_.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Int32__ {
    IL2CPP_REGISTER_METHOD(
        0x02BB8880,
        app::Dictionary_2_System_Int32_System_Int32_*,
        get_Item,
        app::Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Int32_* this_ptr,
        int32_t key
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Int32_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Int32_* this_ptr,
        int32_t key,
        app::Dictionary_2_System_Int32_System_Int32_* value
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_Dictionary_2_System_Int32_System_Int32__
