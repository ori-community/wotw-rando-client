#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_LimitedLifetime_Moon_Timeline_MoonTimeline_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_LimitedLifetime_Moon_Timeline_MoonTimeline_.h>
#include <Modloader/app/structs/LimitedLifetime.h>
#include <Modloader/app/structs/MoonTimeline.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_LimitedLifetime_Moon_Timeline_MoonTimeline_ {
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_LimitedLifetime_Moon_Timeline_MoonTimeline_* this_ptr,
        app::LimitedLifetime* key,
        app::MoonTimeline* value
    )
    IL2CPP_REGISTER_METHOD(0x02BD3EC0, bool, Remove, app::Dictionary_2_LimitedLifetime_Moon_Timeline_MoonTimeline_* this_ptr, app::LimitedLifetime* key)
    IL2CPP_REGISTER_METHOD(
        0x02BA5400,
        app::Dictionary_2_TKey_TValue_Enumerator_LimitedLifetime_Moon_Timeline_MoonTimeline_,
        GetEnumerator,
        app::Dictionary_2_LimitedLifetime_Moon_Timeline_MoonTimeline_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, app::Dictionary_2_LimitedLifetime_Moon_Timeline_MoonTimeline_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_LimitedLifetime_Moon_Timeline_MoonTimeline_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_LimitedLifetime_Moon_Timeline_MoonTimeline_
