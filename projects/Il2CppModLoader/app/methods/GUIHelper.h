#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::GUIHelper {
    IL2CPP_REGISTER_METHOD(0x0151D9B0, app::GUIStyle*, get_BigTextStyle, ())
    IL2CPP_REGISTER_METHOD(0x0151DCC0, app::GUIStyle*, get_MediumSizeTextSyle, ())
    IL2CPP_REGISTER_METHOD(0x0151DFE0, void, DrawLargeCenteredMessage, (app::String * messsage, app::Color color))
    IL2CPP_REGISTER_METHOD(0x0151E310, void, DrawFooterMessage, (app::String * messsage, app::Color color))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GUIHelper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
} // namespace app::classes::GUIHelper
