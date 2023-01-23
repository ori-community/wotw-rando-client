#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_UnityEngine_Object_.h>
#include <Modloader/app/structs/ITimelineEntityCreationListener.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::Moon::Timeline::TimelineCreationListenerExtensions {
    IL2CPP_REGISTER_METHOD(0x01E83E80, app::List_1_UnityEngine_Object_*, GetFilteredTargets, (app::ITimelineEntityCreationListener * listener))
    IL2CPP_REGISTER_METHOD(0x01E83FD0, bool, IsTypeOnBlacklist, (app::Type * type))
    IL2CPP_REGISTER_METHOD(0x01E84120, void, AutoFill, (app::ITimelineEntityCreationListener * listener))
    IL2CPP_REGISTER_METHOD(0x01E84220, void, cctor, ())
} // namespace app::classes::Moon::Timeline::TimelineCreationListenerExtensions
