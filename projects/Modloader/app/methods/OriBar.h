#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::OriBar {
    IL2CPP_REGISTER_METHOD(0x00621BF0, void, SetShowCondition, (app::OriBar * this_ptr, app::Func_1_Boolean_* should_show_now))
    IL2CPP_REGISTER_METHOD(0x00621C60, float, get_CurrentValue, (app::OriBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00621C90, float, get_MaxValue, (app::OriBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00621CC0, void, Awake, (app::OriBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00622010, void, OnDestroy, (app::OriBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006221B0, void, OnRestoreCheckpoint, (app::OriBar * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04799788, OriBar_OnRestoreCheckpoint__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00622230, bool, get_ShouldBeShown, (app::OriBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006222E0, void, UpdateValue, (app::OriBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00622450, void, FixedUpdate, (app::OriBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00622810, void, UpdateVisuals, (app::OriBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00622C00, void, PlayShowTimeline, (app::OriBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00622E10, void, PlayHideTimeline, (app::OriBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00623080, void, Show, (app::OriBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006230C0, void, Hide, (app::OriBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006230E0, void, ctor, (app::OriBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00623190, void, _PlayHideTimeline_b__45_0, (app::OriBar * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474DC60, OriBar__PlayHideTimeline_b__45_0__MethodInfo)
} // namespace app::classes::OriBar
