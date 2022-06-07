#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::UI::RectangularVertexClipper {
    IL2CPP_REGISTER_METHOD(0x02665480, void, ctor, (app::RectangularVertexClipper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02665520, app::Rect, GetCanvasRect, (app::RectangularVertexClipper * this_ptr, app::RectTransform * t, app::Canvas * c))
}
