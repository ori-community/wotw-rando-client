#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RectangularVertexClipper.h>
#include <Modloader/app/structs/Canvas.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/RectTransform.h>

namespace app::classes::UnityEngine::UI::RectangularVertexClipper {
    IL2CPP_REGISTER_METHOD(0x02665480, void, ctor, (app::RectangularVertexClipper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02665520, app::Rect, GetCanvasRect, (app::RectangularVertexClipper * this_ptr, app::RectTransform* t, app::Canvas* c))
} // namespace app::classes::UnityEngine::UI::RectangularVertexClipper
