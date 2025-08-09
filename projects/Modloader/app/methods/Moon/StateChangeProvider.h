#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IDesiredUberState.h>
#include <Modloader/app/structs/IGenericUberState.h>
#include <Modloader/app/structs/List_1_Moon_DesiredStateTransitionInfo_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/StateChangeProvider.h>

namespace app::classes::Moon::StateChangeProvider {
    IL2CPP_REGISTER_METHOD(0x01BAF240, app::IGenericUberState*, get_State, app::StateChangeProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BAF300, app::List_1_Moon_DesiredStateTransitionInfo_*, get_DesiredStateList, app::StateChangeProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01BAF4B0, app::IDesiredUberState*, GetRequirementsForTimeline, app::StateChangeProvider* this_ptr, app::MoonTimeline* timeline)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::StateChangeProvider* this_ptr)
} // namespace app::classes::Moon::StateChangeProvider
