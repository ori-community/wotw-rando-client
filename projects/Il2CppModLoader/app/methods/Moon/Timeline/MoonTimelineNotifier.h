#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Timeline::MoonTimelineNotifier {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, NotifyTimelineEvent, (app::ITimelineEntity * timeline, app::IContext* context, app::MoonTimelineNotifier_Action__Enum action))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, NotifyBranching, (app::BrainEntity * brain, int32_t branch))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, NotifyScalableAnimationTime, (app::ScalableAnimationPlayer * animation_player, float normalized_time))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MoonTimelineNotifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E77DC0, void, cctor, ())
} // namespace app::classes::Moon::Timeline::MoonTimelineNotifier
