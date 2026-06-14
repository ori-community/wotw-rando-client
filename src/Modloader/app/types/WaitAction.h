#pragma once
#include <Modloader/app/structs/WaitAction.h>
#include <Modloader/app/structs/WaitAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaitAction {
        inline app::WaitAction__Class** type_info() {
            static app::WaitAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaitAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaitAction__Class* get_class() {
            return il2cpp::get_class<app::WaitAction__Class>(type_info(), "", "WaitAction");
        }
        inline app::WaitAction* create() {
            return il2cpp::create_object<app::WaitAction>(get_class());
        }
    } // namespace WaitAction
} // namespace app::classes::types
