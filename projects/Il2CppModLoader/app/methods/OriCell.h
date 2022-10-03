#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::OriCell {
    IL2CPP_REGISTER_METHOD(0x00623200, void, SetShowCondition, (app::OriCell * this_ptr, app::Func_1_Boolean_* should_show_now))
    IL2CPP_REGISTER_METHOD(0x00623240, float, get_CurrentValue, (app::OriCell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00623250, void, set_CurrentValue, (app::OriCell * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00623260, float, get_MaxValue, (app::OriCell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00623270, void, set_MaxValue, (app::OriCell * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00413160, bool, get_IsVisible, (app::OriCell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00623280, void, OnAwake, (app::OriCell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00623480, void, OnRestoreCheckpoint, (app::OriCell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006234B0, bool, get_ShouldBeShown, (app::OriCell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00623590, void, UpdateValue, (app::OriCell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00623720, void, ForceUpdateVisual, (app::OriCell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00623760, void, DoUpdate, (app::OriCell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00623AB0, bool, get_FreezeTimedOut, (app::OriCell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00623BC0, void, UpdateVisuals, (app::OriCell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00623EB0, void, PlayShowTimeline, (app::OriCell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00624000, void, PlayHideTimeline, (app::OriCell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00624130, void, Show, (app::OriCell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006242B0, void, Hide, (app::OriCell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00624400, void, ctor, (app::OriCell * this_ptr))
} // namespace app::classes::OriCell
