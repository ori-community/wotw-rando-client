#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::HealthBar {
    IL2CPP_REGISTER_METHOD(0x006FE430, float, get_Value, (app::HealthBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0109F220, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x0109F2D0, void, CacheOriginals, (app::HealthBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0109F3E0, void, Awake, (app::HealthBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0109F5B0, void, OnDestroy, (app::HealthBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0109F750, void, ResetHealthBar, (app::HealthBar * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04745138, HealthBar_ResetHealthBar__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0109F9F0, void, RefreshMaxValue, (app::HealthBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0109FA30, void, OnEnable, (app::HealthBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0109FB40, void, Initialize, (app::HealthBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0109FB90, void, ForceHideBar, (app::HealthBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0109FC00, void, Update, (app::HealthBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0109FFE0, void, ShowBar, (app::HealthBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010A0000, void, OnValueChanged, (app::HealthBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010A01C0, void, UpdateColorBar, (app::HealthBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010A0470, void, UpdateGrayBar, (app::HealthBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010A0790, void, UpdateBackground, (app::HealthBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010A0850, app::Color, GetMinBarColorByValue, (app::HealthBar * this_ptr, float normalized_value))
    IL2CPP_REGISTER_METHOD(0x010A0910, app::Color, GetMaxBarColor, (app::HealthBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010A0980, app::Color, GetBackBarColor, (app::HealthBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010A09B0, app::Vector4, GetTextureOffsetByValue, (app::HealthBar * this_ptr, float normalized_value))
    IL2CPP_REGISTER_METHOD(0x010A09F0, void, ctor, (app::HealthBar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010A0AD0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, IDisableOnRecordablePreview_get_gameObject, (app::HealthBar * this_ptr))
} // namespace app::classes::HealthBar
