#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::UI::MultipleDisplayUtilities {
    IL2CPP_REGISTER_METHOD(0x026629A0, bool, GetRelativeMousePositionForDrag, (app::PointerEventData * event_data, app::Vector2 * position))
    IL2CPP_REGISTER_METHOD(0x02662B60, app::Vector2, GetMousePositionRelativeToMainDisplayResolution, ())
}
