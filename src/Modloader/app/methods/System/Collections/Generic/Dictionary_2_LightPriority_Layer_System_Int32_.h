#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_LightPriority_Layer_System_Int32_.h>
#include <Modloader/app/structs/LightPriority_Layer__Enum.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_LightPriority_Layer_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_LightPriority_Layer_System_Int32_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_LightPriority_Layer_System_Int32_* this_ptr,
        app::LightPriority_Layer__Enum key,
        int32_t value
    )
    IL2CPP_REGISTER_METHOD(0x02C2F6D0, int32_t, get_Item, app::Dictionary_2_LightPriority_Layer_System_Int32_* this_ptr, app::LightPriority_Layer__Enum key)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_LightPriority_Layer_System_Int32_
