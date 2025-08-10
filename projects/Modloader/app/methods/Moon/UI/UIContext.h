#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IUIComponent.h>
#include <Modloader/app/structs/UIContext.h>

namespace app::classes::Moon::UI::UIContext {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::UIContext* this_ptr, app::IUIComponent* component)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::IUIComponent*, get_Component, app::UIContext* this_ptr)
} // namespace app::classes::Moon::UI::UIContext
