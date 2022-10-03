#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ActionTimer_TimedAction {
        namespace {
            app::ActionTimer_TimedAction__Class* type_info_ref = nullptr;
        }
        app::ActionTimer_TimedAction__Class** type_info = &type_info_ref;
        inline app::ActionTimer_TimedAction__Class* get_class() {
            return il2cpp::get_nested_class<app::ActionTimer_TimedAction__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "ActionTimer", "TimedAction");
        }
        inline app::ActionTimer_TimedAction* create() {
            return il2cpp::create_object<app::ActionTimer_TimedAction>(get_class());
        }
        inline app::ActionTimer_TimedAction__Array* create_array(int size) {
            return il2cpp::array_new<app::ActionTimer_TimedAction__Array>(get_class(), size);
        }
    } // namespace ActionTimer_TimedAction
} // namespace app::classes::types
