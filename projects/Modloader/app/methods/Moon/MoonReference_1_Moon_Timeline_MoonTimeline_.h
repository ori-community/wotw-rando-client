#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonReference_1_Moon_Timeline_MoonTimeline_.h>
#include <Modloader/app/structs/IMoonResolverContext.h>
#include <Modloader/app/structs/MoonTimeline.h>

namespace app::classes::Moon::MoonReference_1_Moon_Timeline_MoonTimeline_ {
    IL2CPP_REGISTER_METHOD(0x027216E0, bool, CanResolve, (app::MoonReference_1_Moon_Timeline_MoonTimeline_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x02720AC0, app::MoonTimeline*, Resolve, (app::MoonReference_1_Moon_Timeline_MoonTimeline_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x02720A20, bool, get_HasAReference, (app::MoonReference_1_Moon_Timeline_MoonTimeline_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02720EB0, app::MoonTimeline*, SafeResolve, (app::MoonReference_1_Moon_Timeline_MoonTimeline_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x027205B0, void, ctor, (app::MoonReference_1_Moon_Timeline_MoonTimeline_ * this_ptr, app::MoonTimeline* reference))
} // namespace app::classes::Moon::MoonReference_1_Moon_Timeline_MoonTimeline_
