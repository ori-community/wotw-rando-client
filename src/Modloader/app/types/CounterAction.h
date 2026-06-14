#pragma once
#include <Modloader/app/structs/CounterAction.h>
#include <Modloader/app/structs/CounterAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CounterAction {
        inline app::CounterAction__Class** type_info() {
            static app::CounterAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CounterAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CounterAction__Class* get_class() {
            return il2cpp::get_class<app::CounterAction__Class>(type_info(), "", "CounterAction");
        }
        inline app::CounterAction* create() {
            return il2cpp::create_object<app::CounterAction>(get_class());
        }
    } // namespace CounterAction
} // namespace app::classes::types
