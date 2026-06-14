#pragma once
#include <Modloader/app/structs/FadeToBlackAction.h>
#include <Modloader/app/structs/FadeToBlackAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FadeToBlackAction {
        inline app::FadeToBlackAction__Class** type_info() {
            static app::FadeToBlackAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FadeToBlackAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FadeToBlackAction__Class* get_class() {
            return il2cpp::get_class<app::FadeToBlackAction__Class>(type_info(), "", "FadeToBlackAction");
        }
        inline app::FadeToBlackAction* create() {
            return il2cpp::create_object<app::FadeToBlackAction>(get_class());
        }
    } // namespace FadeToBlackAction
} // namespace app::classes::types
