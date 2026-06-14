#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BaseEventData.h>
#include <Modloader/app/structs/Button.h>
#include <Modloader/app/structs/Button_ButtonClickedEvent.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/PointerEventData.h>

namespace app::classes::UnityEngine::UI::Button {
    IL2CPP_REGISTER_METHOD(0x01F2BB30, void, ctor, app::Button* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F2BCB0, app::Button_ButtonClickedEvent*, get_onClick, app::Button* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008760C0, void, set_onClick, app::Button* this_ptr, app::Button_ButtonClickedEvent* value)
    IL2CPP_REGISTER_METHOD(0x01F2BCC0, void, Press, app::Button* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F2BD90, void, OnPointerClick, app::Button* this_ptr, app::PointerEventData* event_data)
    IL2CPP_REGISTER_METHOD(0x01F2BDC0, void, OnSubmit, app::Button* this_ptr, app::BaseEventData* event_data)
    IL2CPP_REGISTER_METHOD(0x01F2BF70, app::IEnumerator*, OnFinishSubmit, app::Button* this_ptr)
} // namespace app::classes::UnityEngine::UI::Button
