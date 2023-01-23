#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PointerEventData.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::UnityEngine::UI::MultipleDisplayUtilities {
    IL2CPP_REGISTER_METHOD(0x026629A0, bool, GetRelativeMousePositionForDrag, (app::PointerEventData * event_data, app::Vector2* position))
    IL2CPP_REGISTER_METHOD(0x02662B60, app::Vector2, GetMousePositionRelativeToMainDisplayResolution, ())
} // namespace app::classes::UnityEngine::UI::MultipleDisplayUtilities
