#include <Modloader/app/methods/ControlList.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>

namespace {
    // This patch allows binding the same key to
    // multiple actions in the vanilla controls menu

    auto is_assigning_key = false;

    IL2CPP_INTERCEPT(void, ControlList, RemoveBinding, app::ControlList * this_ptr, app::ControlItem* control, app::KeyCode__Enum code) {
        if (is_assigning_key) {
            return;
        }

        next::ControlList::RemoveBinding(this_ptr, control, code);
    }

    IL2CPP_INTERCEPT(void, ControlList, AssignKey, app::ControlList * this_ptr, app::ControlItem* control, int32_t index, app::KeyCode__Enum pressed_key) {
        modloader::ScopedSetter _(is_assigning_key, true);
        next::ControlList::AssignKey(this_ptr, control, index, pressed_key);
    }
}
