#pragma once
#include <Modloader/app/structs/ActionTimer_TimedAction__Array.h>
#include <Modloader/app/structs/ActionTimer_TimedAction__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ActionTimer_TimedAction__Array {
        inline app::ActionTimer_TimedAction__Array__Class** type_info() {
            static app::ActionTimer_TimedAction__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ActionTimer_TimedAction__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ActionTimer_TimedAction__Array__Class* get_class() {
            return il2cpp::get_class<app::ActionTimer_TimedAction__Array__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "ActionTimer+TimedAction[]");
        }
        inline app::ActionTimer_TimedAction__Array* create() {
            return il2cpp::create_object<app::ActionTimer_TimedAction__Array>(get_class());
        }
    } // namespace ActionTimer_TimedAction__Array
} // namespace app::classes::types
