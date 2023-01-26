#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_Moon_Timeline_MoonTimeline_Moon_MoonFloat_.h>
#include <Modloader/app/structs/MoonFloat.h>
#include <Modloader/app/structs/MoonTimeline.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_Moon_Timeline_MoonTimeline_Moon_MoonFloat_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_Moon_Timeline_MoonTimeline_Moon_MoonFloat_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_Moon_Timeline_MoonTimeline_Moon_MoonFloat_ * this_ptr, app::MoonTimeline* key, app::MoonFloat* value))
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_Moon_Timeline_MoonTimeline_Moon_MoonFloat_ * this_ptr, app::MoonTimeline* key, app::MoonFloat** value))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_Moon_Timeline_MoonTimeline_Moon_MoonFloat_
