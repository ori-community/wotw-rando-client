#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PointerInputModule_MouseButtonEventData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F258A0, bool, PressedThisFrame, (app::PointerInputModule_MouseButtonEventData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F258C0, bool, ReleasedThisFrame, (app::PointerInputModule_MouseButtonEventData * this_ptr))
} // namespace app::classes::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData
