#pragma once
#include <Modloader/app/structs/ActionTimer_TimedAction.h>
#include <Modloader/app/structs/ActionTimer_TimedAction__Array.h>
#include <Modloader/app/structs/ActionTimer_TimedAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ActionTimer_TimedAction {
        inline app::ActionTimer_TimedAction__Class** type_info() {
            static app::ActionTimer_TimedAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ActionTimer_TimedAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ActionTimer_TimedAction__Class* get_class() {
            return il2cpp::get_nested_class<app::ActionTimer_TimedAction__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "ActionTimer", "TimedAction");
        }
        inline app::ActionTimer_TimedAction* create() {
            return il2cpp::create_object<app::ActionTimer_TimedAction>(get_class());
        }
        inline app::ActionTimer_TimedAction__Array* create_array(int size) {
            return il2cpp::array_new<app::ActionTimer_TimedAction__Array>(get_class(), size);
        }
        inline app::ActionTimer_TimedAction__Array* create_array(const std::vector<app::ActionTimer_TimedAction*>& items) {
            return il2cpp::array_new<app::ActionTimer_TimedAction__Array>(get_class(), items);
        }
    } // namespace ActionTimer_TimedAction
} // namespace app::classes::types
