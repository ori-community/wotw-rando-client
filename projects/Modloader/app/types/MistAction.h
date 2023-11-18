#pragma once
#include <Modloader/app/structs/MistAction.h>
#include <Modloader/app/structs/MistAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MistAction {
        inline app::MistAction__Class** type_info() {
            static app::MistAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MistAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MistAction__Class* get_class() {
            return il2cpp::get_class<app::MistAction__Class>(type_info(), "", "MistAction");
        }
        inline app::MistAction* create() {
            return il2cpp::create_object<app::MistAction>(get_class());
        }
    } // namespace MistAction
} // namespace app::classes::types
