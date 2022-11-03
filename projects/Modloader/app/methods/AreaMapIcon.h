#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::AreaMapIcon {
    IL2CPP_REGISTER_METHOD(0x0050CA80, bool, ShouldShowAttentionMarker, (app::AreaMapIcon * this_ptr, app::GameWorldAreaID__Enum area_i_d))
    IL2CPP_REGISTER_METHOD(0x0050CC20, void, Awake, (app::AreaMapIcon * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0050CD10, void, ShowLabel, (app::AreaMapIcon * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0050CDB0, void, HideLabel, (app::AreaMapIcon * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0050CE70, bool, IsIconShown, (app::AreaMapIcon * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0050D0C0, void, SetMessageProvider, (app::AreaMapIcon * this_ptr, app::MessageProvider* provider))
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, SetIcon, (app::AreaMapIcon * this_ptr, app::GameObject* icon_prefab))
    IL2CPP_REGISTER_METHOD(0x0050D170, void, SetIconActive, (app::AreaMapIcon * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0050D390, void, SetIconSpecial, (app::AreaMapIcon * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0050D5B0, void, SetIconInactive, (app::AreaMapIcon * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0050D7D0, void, SetAttentionMarker, (app::AreaMapIcon * this_ptr, bool enable))
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::GameObject*, GetTransparencyAnimatorContainer, (app::AreaMapIcon * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::AreaMapIcon * this_ptr))
} // namespace app::classes::AreaMapIcon
