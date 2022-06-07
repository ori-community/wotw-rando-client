#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::UI::GraphicRegistry {
    IL2CPP_REGISTER_METHOD(0x024B4140, void, ctor, (app::GraphicRegistry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024B4590, app::GraphicRegistry *, get_instance, ())
    IL2CPP_REGISTER_METHOD(0x024B4780, void, RegisterGraphicForCanvas, (app::Canvas * c, app::Graphic * graphic))
    IL2CPP_REGISTER_METHOD(0x024B4AD0, void, UnregisterGraphicForCanvas, (app::Canvas * c, app::Graphic * graphic))
    IL2CPP_REGISTER_METHOD(0x024B4CE0, app::IList_1_UnityEngine_UI_Graphic_ *, GetGraphicsForCanvas, (app::Canvas * canvas))
    IL2CPP_REGISTER_METHOD(0x024B4E40, void, cctor, ())
}
