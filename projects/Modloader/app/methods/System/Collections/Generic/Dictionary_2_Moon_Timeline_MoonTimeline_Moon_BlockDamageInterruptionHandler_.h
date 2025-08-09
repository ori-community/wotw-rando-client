#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BlockDamageInterruptionHandler.h>
#include <Modloader/app/structs/Dictionary_2_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler_.h>
#include <Modloader/app/structs/MoonTimeline.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler_ {
    IL2CPP_REGISTER_METHOD(
        0x02BBA760,
        bool,
        TryGetValue,
        app::Dictionary_2_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler_* this_ptr,
        app::MoonTimeline* key,
        app::BlockDamageInterruptionHandler** value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler_* this_ptr,
        app::MoonTimeline* key,
        app::BlockDamageInterruptionHandler* value
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_Moon_Timeline_MoonTimeline_Moon_BlockDamageInterruptionHandler_
