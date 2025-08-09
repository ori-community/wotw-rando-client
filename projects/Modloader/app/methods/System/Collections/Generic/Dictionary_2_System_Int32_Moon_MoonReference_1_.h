#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Int32_Moon_MoonReference_1_.h>
#include <Modloader/app/structs/MoonReference_1_Moon_Timeline_ITimelineEntity_.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_Moon_MoonReference_1_ {
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, app::Dictionary_2_System_Int32_Moon_MoonReference_1_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_System_Int32_Moon_MoonReference_1_* this_ptr,
        int32_t key,
        app::MoonReference_1_Moon_Timeline_ITimelineEntity_* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BB8880,
        app::MoonReference_1_Moon_Timeline_ITimelineEntity_*,
        get_Item,
        app::Dictionary_2_System_Int32_Moon_MoonReference_1_* this_ptr,
        int32_t key
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_Int32_Moon_MoonReference_1_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Int32_Moon_MoonReference_1_
